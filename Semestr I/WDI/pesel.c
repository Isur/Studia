#include<stdio.h>

main()
{
	char pesel[13];
	int check = 0, i = 0, sprawdzaniePesel = 0;
	int waga[] = { 1,3,7,9,1,3,7,9,1,3,1 }, peselLiczba[11];
	
	do
	{
		printf("Podaj 11 znakowy PESEL: \n");
		fgets(pesel, 13, stdin);
		if (pesel[11] == '\n')
		{
			check = 1;
		}
		else
		{
			system("cls");
			printf("Podales zbyt malo lub zbyt duzo znakow! \n");
		}
	} while (check == 0);

	for (i = 0; i < 11; i++)
	{
		peselLiczba[i] = pesel[i] - '0';
	}
		
	for (i = 0; i < 11; i++)
	{
		sprawdzaniePesel += peselLiczba[i] * waga[i];
	}
	if (sprawdzaniePesel % 10 == 0)
	{
		printf("POPRAWNY PESEL!\n");
	}		
	else
	{
		printf("PESEL NIE JEST POPRAWNY!\n");
	}
	system("PAUSE");
	return 0;
}