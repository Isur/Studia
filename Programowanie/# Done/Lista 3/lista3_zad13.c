/* DZIEKI LUKASZ! :) */

/*
Napisz program, który pobiera od użytkownika słowa (bez polskich znaków, zapisane małymi literami) aż do momentu wpisania przez użytkownika komendy: \ready.
Wtedy program wypisuje wszystkie podane słowa (każde z nich w nowej linii) w kolejności alfabetycznej. Założenia:
- użytkownik podaje słowa nie dłuższe niż 20 znaków;
- użytkownik podaje co najwyżej 100 słów;
- przeczytane od użytkownika słowo jest umieszczane w pewnym obszarze pamięci
i nie jest już nigdzie kopiowane aż do całkowitego zakończenia działania programu.
*/
#include<stdio.h>
#include<ctype.h>

// sprawdza czy ktorys powinien byc wczesniej
int findSmaller(char words[100][22], int first, int second)
{
	return strcmp(words[first], words[second]);
}
// sortowanie
void sort(char words[100][22], int quantity, int *order)
{
	int duplicate[100];		// tablica do przechowywania duplikatow
	int i, j, y;			// pomocnicze
	int minimum;			// "najmniejsza" watrosc
	int counter = 0;		// licznik
	for(i = 0; i < quantity; i++)
	{
		duplicate[i] = 0;			// wypelnia tablice zerami poki jeszczen nie ma nic sprawdzonego
	}
	for(i = 0; i < quantity; i++)
	{
		for(j = 0; j < quantity; j++)
		{
			if(duplicate[j] != 1)
			{
				minimum = j;			// szuka minimum
				break;
			}
		}
		for(y = 0; y < quantity; y++)	// porownywanie minimum z reszta
		{
			if(duplicate[y] != 1 && y != j)
			{
				if(findSmaller(words, minimum, y) == 1)
				{
					minimum = y;
				}
			}
		}
		duplicate[minimum] = 1;
		order[counter] = minimum;
		counter ++;
	}
}
// drukuje na ekran posortowane
void printInOrder(char words[100][22], int counter, int *order)
{
	int i = 0;
	for(i; i < counter; i++)
	{
		printf("\n%s", words[order[i]]);
	}
}

void getWords() // pobiera slowa, usuwa \n z konca
{
	char words[100][22];
	int order[100];
	int counter = 0;
	do
	{
		printf("Podaj slowo[max: 100 slow, max: 20 znakow]: ");
		fgets(words[counter], 22, stdin);
		words[counter][strlen(words[counter])-1] = '\0';
		counter++;
	}while(strcmp(words[counter-1],"\\ready") != 0);
	words[counter-1][0] = '\0'; 


	sort(words, counter, order);
	printInOrder(words, counter, order);
}

main()
{
	getWords();

	// THE END
	printf("\n\n");
	system("PAUSE");
	return 0;
}