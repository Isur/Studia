#include<stdio.h>
#include<stdlib.h>

main()
{
	int i = 0, j = 0, snakeLength = 0, error = 0, doItAgain = 0;
	int positionStart[2], positionCurrent[2];
	char net[400][400][3];
	char positionNext;

	printf("\nPodaj wiersz pozycji poczatkowej weza: ");
	scanf("%d", &positionStart[0]);
	printf("\nPodaj kolumne pozycji poczatkowej weza: ");
	scanf("%d", &positionStart[1]);
	getchar();

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
		net[positionStart[0]][positionStart[1]][0] = '[';
		net[positionStart[0]][positionStart[1]][1] = 'X';
		net[positionStart[0]][positionStart[1]][2] = ']';
		doItAgain = 0;
		error = 0;
		positionCurrent[0] = positionStart[0];
		positionCurrent[1] = positionStart[1];
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