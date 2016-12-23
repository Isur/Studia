/*
Napisz funkcję przepisz, która otrzymuje dwie tablice znaków i przepisuje napis
znajdujący się w pierwszej tablicy do drugiej tablicy. Zakładamy, że w drugiej
tablicy jest wystarczająco dużo miejsca. Napisz dwie wersje funkcji przepisz dla
napisów składających się ze znaków typu char i wchart
*/
#include<stdio.h>
#include<ctype.h>
#include<wchar.h>

void przepisz_wchar_t(wchar_t *firstWString, wchar_t *secondWString)
{
		while(*firstWString)
	{
		*secondWString = *firstWString;
		*firstWString++;
		*secondWString++;
	}	
	*secondWString = '\0';
}
void przepisz_char(char *firstString, char *secondString)
{
	while(*firstString)
	{
		*secondString = *firstString;
		*firstString++;
		*secondString++;
	}
	*secondString = '\0';	
}

main()
{
	char *firstString = "Ciag Char";
	char *secondString = "Ten musi byc dluzszy.";
	
	wchar_t *firstWString = L"Ciag wchar_t";
	wchar_t *secondWString = L"Ten ciag jest dluzszy";
	
	przepisz_char(firstString, secondString);
	przepisz_wchar_t(firstWString, secondWString);
	
	printf("\n%s", secondString);
	printf("\n%ls", secondWString);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}