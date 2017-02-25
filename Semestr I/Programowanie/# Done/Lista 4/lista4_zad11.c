/*
Napisz program, który w podanym przez użytkownika pliku zlicza słowa. Program nie rozróżnia wielkości liter. Do słowa nie zalicza znaków przestankowych. Po
uruchomieniu program zadaje pytanie "Podaj nazwę pliku:".
Po wpisaniu nazwy pliku przez użytkownika, program próbuje otworzyć plik.
W razie niepowodzenia tej operacji wyświetla komunikat:
Nieudane otwarcie pliku o nazwie < tu podana nazwa >.
Gdy otwarcie przebiegło pomyślnie, program przystępuje do badania pliku.
I tak na przykład dla pliku o treści:
To jest ciekawy tekst.
Co to?
To jest pytanie.
Wypisze:
to - 3 razy
jest - 2 razy
ciekawy - raz
tekst - raz
co - raz
pytanie - raz
*/
#define MAX_WORDS 10000
#define MAX_CHAR 25
#include<stdio.h>
#include<ctype.h>
int j = 0; // globalna dla ulatwienia :)
// zlicza i wypisuje slowa
void counter(char words[MAX_WORDS][MAX_CHAR], char *word)
{
	char temp[MAX_WORDS][MAX_CHAR];	// przechowuje juz uzyte slowa
	int count = 0;			// ilosc powtorzen
	int i = 0;				// pomocnicza

	for(i;  strlen(words[i]) > 0; i++)	// zlicza powtorzenia danego slowa
	{
		if(strcmp(word, words[i]) == 0)
		{
			count++;
		}
	}
	for(i = 0; strlen(words[i]) > 0; i++) // jesli slowo juz bylo to nie wypisuje go
	{
		if(strcmp(word, temp[i]) == 0)	
		{
			return;
		}
	}
	strcpy(temp[j], word); // wrzuca juz uzyte slowa do tablicy
	j++;					// ilosc slow ktore byly
	if(count == 1) printf("\n%s - raz", word); 		// wypisanie wyniku
	else if(count > 1) printf("\n%s - %d razy", word, count); 		// wypisanie wyniku
}


main()
{
	int temp;						// przechowuje znak pobrany z pliku
	int i = 0, j = 0, y = 0;		// pomocnicze
	char file_name[256];			// nazwa pliku pobrana od uzytkownika
	char word[MAX_CHAR];					// pojedyncze slowo
	char words[MAX_WORDS][MAX_CHAR];			// tablica slow
	FILE *file;							
	printf("Podaj nazwe pliku: ");
	fgets(file_name, 256, stdin);
	file_name[strlen(file_name) - 1] = '\0';		// pozbycie sie \n z nazwy pliku

	file = fopen(file_name, "rb");								// otwieranie pliku
	if(file == NULL) printf("ERROR! FAILED TO LOAD FILE!");
	else
	{
		while(1)
		{
			temp = fgetc(file);
			if(temp == EOF) break;
			// 65 - 90 oraz 97 - 122
			if((temp >= 65 && temp <= 90) || (temp >= 97 && temp <= 122))	// A-Z oraz a-z
			{
				words[i][j] = temp;	//zapisanie slowa
				j++;
			}else if(temp == 32 || temp == '\n')
			{
				words[i][j] = '\0';	//zakonczenie slowa
				i++;	
				j = 0;
			}
		}
		fclose(file);
	}
	for(i = 0; strlen(words[i]) > 0; i++)	// zamiana wszystkich znakow na male
	{
		for(j = 0;j < strlen(words[i]);j++)
		{
			words[i][j] = tolower(words[i][j]);
		}
	}
	for(j = 0; j < i; j++)
	{
		strcpy(word, words[j]);		// kopiuje slowo
		counter(words, word);		// funkcja zliczajaca wystapienia 
	}

	printf("\n\n");
	system("PAUSE");
	return 0;
}