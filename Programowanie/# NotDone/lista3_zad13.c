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



void getWords()
{
	char words[100][22];
	int n = 0, j = 0, i = 0;
	do
	{
		printf("Podaj slowo[max: 100 slow, max: 20 znakow]: ");
		fgets(words[n], 22, stdin);
		words[n][strlen(words[n])-1] = '\0';
		n++;
	}while(strcmp(words[n-1],"\\ready") != 0);
	words[n-1][0] = '\0'; 
	for (i = 0; i < n; i++)
	{
		j = 0;
		while(words[i][j] != '\0')
		{
			printf("%c", words[i][j]);
			j++;
		}
		printf("\n");
	}


}

main()
{
	getWords();

	// THE END
	printf("\n\n");
	system("PAUSE");
	return 0;
}