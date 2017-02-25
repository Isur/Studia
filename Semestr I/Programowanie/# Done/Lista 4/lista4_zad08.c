/*
Rozmieszczenie nawiasów. Napisz program, który bada podany przez użytkownika
plik z rozszerzeniem .c pod kątem poprawnego rozmieszczenia nawiasów: () {} [].
Program wypisuje: Plik jest poprawny. lub W linii N cos sie nie zgadza.
a) Wersja uproszczona.
b) Program rozpoznaje linie skomentowane za pomocą // oraz /* ... */
/*c) Wykrywa też sytuacje: "{" ’)’
*/

#include<stdio.h>

main()
{
	int temp = 0, i = 0, j = 0, x = 0; // pomocnicze
	int line = 1, bytes = 1, bracektsOpen = 0, bracektsClose = 0, byte = 0; // statystyki
	int bool_error = 0, bool_ignore = 0;	// czy jest blad, czy jest ingnorowanie
	int bracket[1000][4];
	/*
		bracket[1000][4];
		0 - typ nawiasu {}[]()
		1 - w ktorej linii
		2 - ktory bajt
		3 - czy byl juz sprawdzony
	*/ 
	int error[1000]; // przechowuje polozenie bledu
	FILE *file_test;
	file_test = fopen("zad08_nawiasy.c", "rb");
	if(file_test == NULL) printf("ERROR. FAILED TO LOAD FILE");
	else
	{
		while(1)
		{
			if(temp == '\n') line++;
			temp = fgetc(file_test);
			if(temp == EOF) break;
			// sprawdzanie komentarza
			if(temp == '/')
			{
				temp = fgetc(file_test);
				if(temp == '/')
				{
					bool_ignore = 1;
				}
				else if(temp == '*')
				{
					bool_ignore = 2;
				}
			}
			if(bool_ignore == 1)
			{
				if(temp == '\n') bool_ignore = 0;
			}
			else if(bool_ignore == 2)
			{
				if(temp == '*')
				{
					temp = fgetc(file_test);
					if(temp == '/') bool_ignore = 0;
				}
			}
			byte++;
			if(bool_ignore == 1 || bool_ignore == 2) continue; // ignoruje kod tak dlugo jak jest komentarz
			// sprawdzanie nawiasow
			if(temp == '{')
			{
				bracket[i][0] = '{';
				bracket[i][1] = line;
				bracket[i][2] = byte;
				bracket[i][3] = 0;
				bracektsOpen++;
				i++;
			}
			else if(temp == '[')
			{
				bracket[i][0] = '[';
				bracket[i][1] = line;
				bracket[i][2] = byte;
				bracket[i][3] = 0;
				bracektsOpen++;
				i++;
			}
			else if(temp == '(')
			{
				bracket[i][0] = '(';
				bracket[i][1] = line;
				bracket[i][2] = byte;
				bracket[i][3] = 0;
				bracektsOpen++;
				i++;
			}
			else if(temp == '}')
			{
				bracket[i][0] = '}';
				bracket[i][1] = line;
				bracket[i][2] = byte;
				bracket[i][3] = 0;
				bracektsClose++;
				i++;
			}
			else if(temp == ']')
			{
				bracket[i][0] = ']';
				bracket[i][1] = line;
				bracket[i][2] = byte;
				bracket[i][3] = 0;
				bracektsClose++;
				i++;
			}
			else if(temp == ')')
			{
				bracket[i][0] = ')';
				bracket[i][1] = line;
				bracket[i][2] = byte;
				bracket[i][3] = 0;
				bracektsClose++;
				i++;
			}
		}
		fclose(file_test);
		if(bracektsOpen != bracektsClose) // jesli nie ma tyle samo zamykajacych i otwierajacych to wiadomo ze cos nie tak
		{
			printf("Brakuje nawiasow :(.");
		}
		else
		{	/*
				Sprawdza od ostatniego nawiasu do pierwszego. 
				Jesli trafi na otwierajacy to wraca i sprawdza 
				czy nie ma dla niego zamkniecia, jak jest to go 
				wyklucza z dalszego sprawdzania, gdy nie ma to 
				zapisuje to jako blad razem z linia w ktorej 
				znajduje sie nie zamkniety nawias otwierajacy
			*/
			for(i = bracektsClose + bracektsOpen - 1;i >= 0; i--)
			{
				if(bracket[i][0] == '{')
				{
					for(j = i;j < bracektsOpen + bracektsClose; j++)			
					{
						if(bracket[j][0] == '}' && bracket[j][3] == 0)
						{
							bool_error = 0;
							bracket[j][3] = 1;
							break;
						}
						else
						{
							bool_error = 1;
						}
					}
					if(bool_error == 1)
					{
						error[x] =  bracket[i][1];
						x++;
					}
				}
				else if(bracket[i][0] == '[')
				{
					for(j = i;j < bracektsOpen + bracektsClose; j++)
					{
						if(bracket[j][0] == ']' && bracket[j][3] == 0)
						{
							bool_error = 0;
							bracket[j][3] = 1;
							break;
						}
						else
						{
							bool_error = 1;
						}
					}
					if(bool_error == 1)
					{
						error[x] =  bracket[i][1];
						x++;
					}
				}
				else if(bracket[i][0] == '(')
				{
					for(j = i;j < bracektsOpen + bracektsClose; j++)
					{
						if(bracket[j][0] == ')' && bracket[j][3] == 0)
						{
							bool_error = 0;
							bracket[j][3] = 1;
							break;
						}
						else
						{
							bool_error = 1;
						}
					}
					if(bool_error == 1)
					{
						error[x] = bracket[i][1];
						x++;
					}
				}
			}
			if(x > 0) printf("Problemy z naiwasami w liniach: ");
			else printf("WOW nie ma problemow z nawiasami!");
			for(i = 0; i < x; i++)
			{
				printf("\n%d", error[i]);
			}
		}
	}
	printf("\n");
	for(i = 0; i < bracektsOpen + bracektsClose; i++)
	{
		printf("%c", bracket[i][0]);
	}
	// mala statystyka pliku pomocna przy rozwiazywaniu problemu ;)
	printf("\n Linie: %d \n Bajty: %d \n Errory: %d \n Otwarte: %d \n Zamkniete: %d ", line, byte, x, bracektsOpen, bracektsClose );
	printf("\n\n");
	system("PAUSE");
	return 0;
}