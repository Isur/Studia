/*
Napisz funkcję przepisz, która otrzymuje dwie tablice znaków i przepisuje napis
znajdujący się w pierwszej tablicy do drugiej tablicy. Zakładamy, że w drugiej
tablicy jest wystarczająco dużo miejsca. Napisz dwie wersje funkcji przepisz dla
napisów składających się ze znaków typu char i wchart
*/
#include<stdio.h>
#include<ctype.h>
#include<wchar.h>

void przepisz_v2(wchar_t *firstWString, wchar_t *secondWString)
{
	
}
void przepisz(char *firstString, char *secondString)
{
	
}

main()
{
	char *firstString = "test";
	char *secondString = "hueh";
	
	wchar_t *firstWString = L"wTest";
	wchar_t *secondWString = L"wHueh";
	
	przepisz(firstString, secondString);
	przepisz_v2(firstWString, secondWString);
	
	printf("\n%s", secondString);
	printf("\n%ls", secondWString);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}