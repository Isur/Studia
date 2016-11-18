#include<stdio.h>
#include<stdlib.h>
/*
	Napisz program, który wypisze wszystkie ciągi składające się z niepowtarzających
	się liczb ze zbioru {1, 2, . . . , n}. Liczba n podana jest przez użytkownika i jest nie
	większa niż 8. Przykład, dla n = 3 program wypisze:
	1 2 3
	2 1 3
	2 3 1
	3 1 2
	3 2 1
*/
void swap(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void permutation(char *arrayContent, int startPosition, int arraySize)
{
	int i, j = 0; // zmienne pomocnicze

	if (startPosition == arraySize)					// Wypisanie
	{
		for (j = 0; j <= arraySize; j++)
		{
			printf("%c", arrayContent[j]);
		}
		printf("\n");
	}
	else
	{
		for (i = startPosition; i <= arraySize; i++)	// zamiana pozycji 
		{
			swap((arrayContent + startPosition), (arrayContent + i));
			permutation(arrayContent, startPosition+1, arraySize);
			swap((arrayContent + startPosition), (arrayContent + i));
		}
	}
}

main()
{
	char alphabet[] = "12345678";		// zbior liczb
	int alphabetLength = 0;				// dlugosc tego zbioru
	// pobieranie od uzytkownia dlugosci (1-8)
	do
	{
		system("CLS");
		printf("\nPodaj dlugosc ciagow znakow[ od 1 do 8]: ");
		scanf("%d", &alphabetLength);
	}while (alphabetLength > 8 || alphabetLength < 1);
	permutation(alphabet, 0, alphabetLength-1); // (zbior, pozycja poczatkowa, rozmiar zbioru)

	system("PAUSE");
	return 0;
}