#include<stdio.h>
#include<stdlib.h>
/*
Program „Wąż”. Na nieskończonej kartce papieru, na której znajdują się kratki
chcemy narysować węża. Rozpoczynając od pewnej pozycji rysujemy poprzez kolejne
sąsiednie kratki linię symbolizującą węża. Wąż nie może się sam ze sobą krzyżować.
Program pyta użytkownika jak długi jest wąż (maksymalnie 1000 kratek), a następnie pobiera od użytkownika ciąg liczb ze zbioru {1, 2, 3, 4} reprezentujących w której
sąsiedniej kratce jest dalsza część węża ( 1 - górnej, 2 - dolnej, 3 - lewej, 4 - prawej). Program analizuje, czy podany ciąg poprawnie definiuje węża. Np. dla liczb:
4,4,4,1,1,3,2,3,1,1 mamy poprawnie określonego węża.
A dla liczb: 3,3,2,4,1,1,1,1 niepoprawnie określonego węża.
*/
main()
{
	int i = 0, j = 0, snakeLength = 0, error = 0, doItAgain = 0; 	// zmienne pomocnicze, dlugosc weza,
	int positionStart[2], positionCurrent[2];						// zmienne dla pozycji poczatkowej i aktualnej
	char net[400][400][3];											// siatka na ktorej wyswietlac bedzie sie waz
	char positionNext;												// zmienna dla nastepnej pozycji
	// pobieranie od uzytkownika pozycji poczatkowej
	printf("\nPodaj wiersz pozycji poczatkowej weza: ");
	scanf("%d", &positionStart[0]);
	printf("\nPodaj kolumne pozycji poczatkowej weza: ");
	scanf("%d", &positionStart[1]);
	getchar();
	// Pobieranie od uzytkownika dlugosci wezna, z uwzglednieniem limutu rozmiaru
	do
	{
		printf("\nPodaj dlugosc weza: ");
		scanf("%d", &snakeLength);
		if (snakeLength > 1000)
		{
			doItAgain = 1;
		}
		else
		{
			doItAgain = 0;
		}
	} while (doItAgain == 1);
	getchar();
	system("CLS");
	// Wypelnienie tablicy siatki "[ ]" 
	do
	{
		for (i = 0; i < (snakeLength + positionStart[0] + 2); i++)
		{
			for (j = 0; j < (snakeLength + positionStart[1] + 2); j++)
			{
				net[i][j][0] = '[';
				net[i][j][1] = ' ';
				net[i][j][2] = ']';
			}
		}
		// Dla pozycji poczatkowej weza
		net[positionStart[0]][positionStart[1]][0] = '[';
		net[positionStart[0]][positionStart[1]][1] = 'X';
		net[positionStart[0]][positionStart[1]][2] = ']';
		// wyzerowanie bledow
		doItAgain = 0;
		error = 0;
		// ustawenie pozycji aktualnej
		positionCurrent[0] = positionStart[0];
		positionCurrent[1] = positionStart[1];
		// Pobieranie kolejnych pozycji weza, wraz z sprawdzaniem poprawnosci, czy waz nie uderza w sciane lub w siebie
		printf("\n [1 - Gora]  [2 - dol] \n [3 - lewo]  [4 - prawo]");
		for (i = 0; i < snakeLength; i++)
		{
			if (error == 1)
				break;
			printf("\n Podaj kolejna pozycje dla weza: ");
			scanf("%c", &positionNext);
			getchar();
			switch (positionNext)
			{
			case '1':
				if (net[positionCurrent[0] - 1][positionCurrent[1]][1] == ' ' && (net[positionCurrent[0] - 1][positionCurrent[1]] >= 0))
				{
					net[positionCurrent[0] - 1][positionCurrent[1]][0] = '[';
					net[positionCurrent[0] - 1][positionCurrent[1]][1] = 'X';
					net[positionCurrent[0] - 1][positionCurrent[1]][2] = ']';
					positionCurrent[0]--;
				}
				else
				{
					error = 1;
				}
				break;
			case '2':
				if (net[positionCurrent[0] + 1][positionCurrent[1]][1] == ' ' && (net[positionCurrent[0] + 1][positionCurrent[1]] >= 0))
				{
					net[positionCurrent[0] + 1][positionCurrent[1]][0] = '[';
					net[positionCurrent[0] + 1][positionCurrent[1]][1] = 'X';
					net[positionCurrent[0] + 1][positionCurrent[1]][2] = ']';
					positionCurrent[0]++;
				}
				else
				{
					error = 1;
				}
				break;
			case '3':
				if (net[positionCurrent[0]][positionCurrent[1] - 1][1] == ' ' && (net[positionCurrent[0]][positionCurrent[1] - 1] >= 0))
				{
					net[positionCurrent[0]][positionCurrent[1] - 1][0] = '[';
					net[positionCurrent[0]][positionCurrent[1] - 1][1] = 'X';
					net[positionCurrent[0]][positionCurrent[1] - 1][2] = ']';
					positionCurrent[1]--;
				}
				else
				{
					error = 1;
				}
				break;
			case '4':
				if (net[positionCurrent[0]][positionCurrent[1] + 1][1] == ' ' && (net[positionCurrent[0]][positionCurrent[1] + 1] >= 0))
				{
					net[positionCurrent[0]][positionCurrent[1] + 1][0] = '[';
					net[positionCurrent[0]][positionCurrent[1] + 1][1] = 'X';
					net[positionCurrent[0]][positionCurrent[1] + 1][2] = ']';
					positionCurrent[1]++;
				}
				else
				{
					error = 1;
				}
				break;
			default:
				doItAgain = 1;
				printf("Niepoprawny klawisz!");
				break;
			}
			if (error == 1)
			{
				system("CLS");
				printf("Blad! Nie mozesz wchodzic w siebie ani w sciany!...");
				doItAgain = 1;
				break;
			}
			if (doItAgain == 1)
			{
				system("CLS");
				printf("BLAD! Podaj polozenie jeszcze raz!");
				break;
			}
		}
	} while (doItAgain == 1);
	system("CLS");
	// Wydrukowanie na ekran siatki oraz weza.
	for (i = 0; i < (snakeLength + positionStart[0] + 2); i++)
	{
		for (j = 0; j < (snakeLength + positionStart[1] + 2); j++)
		{
			printf("%c", net[i][j][0]);
			printf("%c", net[i][j][1]);
			printf("%c", net[i][j][2]);
		}
		printf("\n");
	}

	system("PAUSE");
	return 0;
}