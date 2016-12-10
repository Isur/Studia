#include<stdio.h>
#include<stdlib.h>
/*
Napisz program, który podbiera od użytkownika 10 liczb typu double, zapisuje
je do jednowymiarowej tablicy. Następnie wyszukuje w tej tablicy najmniejszej oraz
największej liczby. Wypisuje na ekran komunikat (przykładowo):
Podano liczby:
-12, 11.1, 4.5, 3.11, -1.1, 5.5, 8.8, 2, 3, 5.1
Najwieksza z nich to: 11.1
Najmniejsza z nich to: -12
*/

double findMin();
double findMax();


double findMin(double array[], int arraySize)
{
	double min = 0;
	int i = 0;
	min = array[0];
	for (i = 0; i < arraySize; i++)
	{
		if (min > array[i])
		{
			min = array[i];
		}

	}

	return min;
}
double findMax(double array[], int arraySize)
{
	double max = 0;
	int i = 0;
	max = array[0];
	for (i = 0; i < arraySize; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}

	}

	return max;
}
main()
{
	double array[10];       	// tablica przechowujaca liczby
	double min, max;            
	int i = 0;             		// zmienna pomocnicza
	for (i = 0; i < 10; i++)    // Pobieranie liczb od uzytkownika
	{
		printf("Podaj %d liczbe: ", i + 1);
		scanf("%lf", &array[i]);
		printf("\n");
	}
	min = findMin(array, (sizeof array / sizeof *array)); // tablica, ilosc elementow tablicy
	max = findMax(array, (sizeof array / sizeof *array));

	printf("\n Najwieksza wartosc z tablicy: %lf", max);
	printf("\n Najmniejsza wartosc z tablicy: %lf", min);
	printf("\n");

	system("PAUSE");
	return 0;
}