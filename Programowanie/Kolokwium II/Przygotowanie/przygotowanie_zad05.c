/*
Napisz funkcję wyczysc, która usuwa z tablicy przechowywany w niej napis 
(w sensie: umieszcza w niej poprawny napis o długości 0). 
Napisz dwie wersje funkcji wyczysc dla napisów składających się ze 
znaków typu char i wchart.
*/
#include<stdio.h>
#include<ctype.h>
#include<wchar.h>
void wyczysc_wchar_t(wchar_t *firstWString)
{
	*firstWString = '\0';
}
void wyczysc_char(char *firstString)
{
	*firstString = '\0';
}

main()
{
	char *firstString = "Ciag char.";
	wchar_t *firstWString = L"Ciag wchar_t.";
	
	
	wyczysc_char(firstString);
 	wyczysc_wchar_t(firstWString);
	
	printf("\n %s", firstString);
	printf("\n %ls", firstWString);
		
	printf("\n\n");
	system("PAUSE");
	return 0;
}