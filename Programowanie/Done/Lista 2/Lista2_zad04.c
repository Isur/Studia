#include<stdio.h>
#include<stdlib.h>
/*
Napisz program, który dodaje dwie liczby naturalne długości do 200 cyfr podane
przez użytkownika w postaci łańcuchów znaków
*/
void calculate(char *a, int sizeA, char *b, int sizeB)
{
	int i = 0, x = 0, y = 0, temp = 0, size = 0;		// zmienne pomocnicze
	char c[203] = { 0 }, d[203] = { 0 };				// 
	size = (sizeA > sizeB) ? sizeA : sizeB;				// sprawdzanie ktora liczba ma wiecej cyfr
	size += 1;
	// Wypełnienie tablic z lewej strony zerami, 
	// aby mialy taka sama ilosc znakow
	for (i = 0; i <= size; i++)	
	{
		if (i < size - sizeA)
			c[i] = 0 + 48;
		if (i < sizeA)
			c[i + (size - sizeA)] = a[i];
		if (i < size - sizeB)
			d[i] = 0 + 48;
		if(i < sizeB)
			d[i + (size - sizeB)] = b[i];

	}
	// Dodawnie
	for (i = size-1; i >= 0; i--)
	{
		x = c[i] - 48;
		y = d[i] - 48;

		if ((x + y) < 10) 
		{
			temp = c[i] - 48;
			temp += y;
			c[i] = temp + 48;
		}
		else	// Dodawnie jesli suma cyfr jest >= 10
		{
			temp = c[i] - 48;
			temp = (x + y) % 10;
			c[i] = temp + 48;
			temp = c[i - 1] - 48;
			temp++;
			c[i - 1] = temp + 48;

		}
	}
	printf("\n%s\n", c);

}

int sizeOfArrayContent(char *arrayContent, int arraySize)
{
	int i = 0, size=0;
	for (i = 0; i < arraySize; i++)
	{
		if (arrayContent[i] == '\n')
			break;
		size++;
		
	}
	return size;
}

main()
{
	char numberOne[202], numberTwo[202];		// Zmienne liczb / 200 znakow + znak nowej linii + znak '\0'
	int sizeOne = 0, sizeTwo = 0;				// Zmienne dla rozmiarow liczb
	// Pobieranie liczb od uzytkownika
	printf("Podaj pierwsza liczbe: ");
	fgets(numberOne, 202, stdin);
	printf("Podaj druga liczbe: ");
	fgets(numberTwo, 202, stdin);
	// Sprawdzanie z ilu cyfr skladaja sie liczby
	sizeOne = sizeOfArrayContent(numberOne, sizeof(numberOne));
	sizeTwo = sizeOfArrayContent(numberTwo, sizeof(numberTwo));
	calculate(numberOne, sizeOne, numberTwo, sizeTwo);
	system("PAUSE");
	return 0;
}