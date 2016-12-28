/*
Zastosuj zbudowane funkcje z poprzedniego zadania do wyznaczania liczby 100!
Sprawdź, czy otrzymasz odpowiedź:
100! = 93 326 215 443 944 152 681 699 238 856 266 700 490 715 968 264 381
621 468 592 963 895 217 599 993 229 915 608 941 463 976 156 518 286 253
697 920 827 223 758 251 185 210 916 864 000 000 000 000 000 000 000 000
*/
#define MAX 100000
#include<stdio.h>
#include<ctype.h>
#include<math.h>

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
// zamiana int na char
char * intToChar(int a, char *strong)
{
	if(a < 10) 
	{
		strong[0] = a + 48;
		strong[1] = '\0';
	}	
	else if(a < 100)
	{
		strong[0] = a/10 + 48;
		strong[1] = a%10 + 48;
		strong[2] = '\0';
	}
	else
	{
		strong[0] = a/100 + 48;
		strong[1] = 0 + 48;
		strong[2] = 0 + 48;
		strong[3] = '\0';

	}
	return strong;
}
// usuwa zera z poczatku 
void printResult(const int i, const char *multiplied)
{
	printf("\nSilnia z %d to: \n",i);
	while(*multiplied == '0') *multiplied++;
	while(*multiplied) printf("%c", *multiplied++);
}

main()
{
	int i = 0;				// pomocnicza
	char strong[4];			// dla char z liczb 1-100
	char multiplied[MAX];	// przechowuje wynik
	char *temp;				// pomocnicza
	multiplied[0] = 1 + 48;	// rozpoczecie od 1
	multiplied[1] = '\0';	// zakonczenie char
	for(i = 0; i < 100; i++)	
	{
		intToChar(i+1, strong);		
		temp = multiply(strong, multiplied);	// przypisanie wyniku	
		strcpy(multiplied, temp);				// kopia wyniku do wlasciwej tablicy
		// printResult(i+1, multiplied);		// wyswietlenie kazdej silni 1-100
	}
	printResult(100,multiplied);				// wyswietlenie wyniku

	

	printf("\n\n");
	system("PAUSE");
	return 0;
}