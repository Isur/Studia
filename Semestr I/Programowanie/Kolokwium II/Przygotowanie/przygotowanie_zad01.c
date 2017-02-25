// DONE!

/*
Zdefiniuj strukturę student służącą do przechowywania danych osobowych 
studenta (struktura powinna zawierać takie pola, jak: imie, nazwisko, adres, pesel, kierunek i numer legitymacji). 
Napisz funkcję, która otrzymuje jako argument wskaźnik na strukturę student i wczytuje dane ze standardowego wejścia 
do rekordu wskazywanego przez argument funkcji.
*/

#include<stdio.h>
#include<ctype.h>

typedef struct
{
	char imie[10];
	char nazwisko[20];
	char adres[50];
	char pesel[13];
	char kierunek[30];
	char nr_legitymacji[10];
} Student;

void addData(Student *pointer)
{
	printf("Podaj imie: ");
	fgets(pointer->imie, 10, stdin);
	pointer->imie[strlen(pointer->imie)-1] = '\0';

	printf("Podaj nazwisko: ");
	fgets(pointer->nazwisko, 20, stdin);
	pointer->nazwisko[strlen(pointer->nazwisko)-1] = '\0';

	printf("Podaj adres: ");
	fgets(pointer->adres, 50, stdin);
	pointer->adres[strlen(pointer->adres)-1] = '\0';

	printf("Podaj pesel: ");
	fgets(pointer->pesel, 13, stdin);
	pointer->pesel[strlen(pointer->pesel)-1] = '\0';

	printf("Podaj kierunek: ");
	fgets(pointer->kierunek, 30, stdin);
	pointer->kierunek[strlen(pointer->kierunek)-1] = '\0';

	printf("Podaj nr legitymacji: ");
	fgets(pointer->nr_legitymacji, 10, stdin);
	pointer->nr_legitymacji[strlen(pointer->nr_legitymacji)-1] = '\0';
}

main()
{
	Student FirstStudent;
	Student *pointer = &FirstStudent;

	addData(pointer);
	printf("\n Uczen: %s %s \n Adres: %s \n Pesel: %s \n Kierunek: %s \n Nr legitymacji: %s", pointer->imie, pointer->nazwisko, pointer->adres, pointer->pesel, pointer->kierunek, pointer->nr_legitymacji);
	printf("\n\n");
	system("PAUSE");
	return 0;
}