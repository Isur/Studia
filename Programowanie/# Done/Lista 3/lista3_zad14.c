/*
Mnożenie liczb naturalnych długości do 200 cyfr.
*/
#define MAX 200
#include<stdio.h>
#include<ctype.h>
#include<math.h>

// Funkcja mnozenia: 
char * multiply(char *a, char *b)
{
	int i = 0, j = 0, k = 0, y = 0, x = 0;		// Zmienne pomocnicze
	int length_a = 0, length_b = 0;				// Dlugosci ciagow
	int result = 0;								// Pzechowuje pierwsza cyfre z mnozenia
	int sum = 0;								// Sumy 
	char temp[MAX];								// Przechowuje cyfry z mnozenia
	char c[MAX];								// 
	char multiplied[MAX];						// Wynik ostateczny
	// Sprawdzenie dlugosci ciagow:
	length_a = strlen(a) - 1;
	length_b = strlen(b) - 1;
	// Zamania na liczbe:
	for(i = 0; i <= length_a; i++)
	{
		a[i] = a[i] - 48;
	}
	for(i = 0; i <= length_b; i++)
	{
		b[i] = b[i] - 48;
	}
	// Mnozenie
	for(i = length_b; i >= 0; i--)
	{
		result = 0;
		for(j = length_a; j >= 0; j--)
		{
			temp[k] = (b[i] * a[j] + result)%10;
			result = (b[i] * a[j] + result)/10;
			k++;
		}
		temp[k] = result;
		k++;
		x++;
		for(y = 0; y < x; y++)
		{
			temp[k] = 0;
			k++;
		}
	}
	k = 0;
	result = 0;
	// Dodawanie 
	for(i = 0; i < length_a + length_b + 2; i++)
	{
		sum = 0;
		y = 0;
		for(j = 1; j <= length_b + 1; j++)
		{
			if( i <= length_a + j)
			{
				sum = sum + temp[y+i];
			}
			y = y + j + length_a + 1;
		}
		c[k] = (sum + result)%10;
		k++;
		result = (sum + result)/10;
	}
	c[k] = result;
	j = 0;
	for(i = k-1; i >= 0; i--)
	{
		multiplied[j] = c[i] + 48;
		j++;
	}
	multiplied[j] = '\0';
	return multiplied;
}
// Funkcja pobierajaca liczbe.
void getNumber(char *number)
{
	printf("Podaj liczbe, maks 200 znakow: ");
	fgets(number, MAX, stdin);
	number[strlen(number)-1] = '\0';
}

main()
{
	char firstNumber[MAX], secondNumber[MAX];
	char *result;
	getNumber(firstNumber);
	getNumber(secondNumber);
	result = multiply(firstNumber, secondNumber);
	printf("%s", result);


	printf("\n\n");
	system("PAUSE");
	return 0;
}