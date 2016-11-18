#include<stdio.h>
#include<stdlib.h>
/*
	Napisz funkcję o prototypie
	void litery( char *s, char *t );
	która do łańcucha s wpisuje wszystkie litery jakie pojawiły się w łańcuchu t bez 
	powtórzeń i rozróżniania ich wielkości, tzn. dla t="Ala ma kota" otrzymamy s="aklmot".
*/
int sizeOfArrayContent(char *arrayContent, int arraySize)
{
	int i = 0, size = 0;
	for (i = 0; i < arraySize; i++)
	{
		if (arrayContent[i] == '\n')
			break;
		size++;

	}
	return size;
}

void litery(char *s, int sSize, char *t, int tSize)
{
	int i = 0, j = 0; 						// zmienne pomocnicze
	int size = 0, chars = 0, change = 0;	// dlugosc ciagu, ilosc roznych znakow, roznica pomiedzy iloscia znakow a iloscia roznych znakow
	size = sizeOfArrayContent(t, tSize);
	// sprawdzanie czy znak sie powtarza, jesli nie to przypisuje go do nowej tablicy
	for (i = 0; i < size; i++)
	{
		if (i == 0)
			s[i] = t[i];
		else
		{
			for (j = 0; j <= i; j++)
			{
				if (s[j] == t[i])
				{		
					change++;
					break;
				}
			}
			if (j-1 == i)
			{
				s[i-change] = t[i];
				chars++;
			}
		}
	}
	// wypisanie znakow.
	for (i = 0; i <= chars; i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");

	
}

main()
{
	char s[1024], t[1024];				
	printf("Podaj lancuch znakow: ");	
	fgets(t, 1024, stdin);
	litery(s,sizeof(s), t, sizeof(t));

	system("PAUSE");
	return 0;
}