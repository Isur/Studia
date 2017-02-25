#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
Napisz program, który oblicza ilość wystąpień poszczególnych znaków w podanym przez użytkownika ciągu. Program rozróżnia wielkie i małe litery oraz akceptuje
wszystkie symbole, które można wprowadzić z klawiatury. Np. poprawnie obliczy ilość
wystąpień wszystkich znaków z ciągu: Ala123 @#$%!.()[]-+?>’"kot
Na ekranie powinna pojawić się lista tych symboli, które pojawiły się co najmniej jeden
raz wraz z liczbą ich wystąpień
*/
main()
{
	char chars[1024];                               // Podane znaki
	int count[1024][2] = {0,0};                     // znak - ilosc 
	int i = 0, j = 0, quantity = 0, change = 0;     // zmienne pomocnicze
	printf("Wpisz ciag znakow: ");
	fgets(chars, 1024, stdin);

	// Sprawdzanie czy znaki sie powtarzaja, 
	for (i = 0; i < strlen(chars); i++)
	{
		if (i == 0)
		{
			count[i][0] = chars[i];
			count[i][1] = 1;
		}
		else
		{
			for (j = 0; j <= i; j++)
			{
				if (count[j][0] == chars[i])
				{
					change++;
					count[j][1] = count[j][1] + 1;
					break;
				}
			}
			if (j-1 == i)
			{
				count[i-change][0] = chars[i];
				count[i-change][1] = 1;
				quantity++;
			}
		}
	}
	// Wypisywanie znakow i ich ilosci
	for (i = 0; i<quantity; i++)
	{
		printf("%c - %d\n", count[i][0], count[i][1]);
	}
	system("PAUSE");
	return 0;
}