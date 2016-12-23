/*
Napisz funkcję porownaj, która jako argumenty otrzymuje dwa napisy i zwraca
1 gdy napisy są równe i 0 w przeciwnym przypadku. Napisz dwie wersje funkcji
porownaj dla napisów składających się ze znaków typu char i wchart.
*/
#include<stdio.h>
#include<ctype.h>
#include<wchar.h>

int porownaj_wchar_t(wchar_t *firstWString, wchar_t *secondWString)
{
	while(*firstWString || *secondWString)
	{
		if(*firstWString != *secondWString) return 0;
		*firstWString++;
		*secondWString++;
	}
	return 1;
}
int porownaj_char(char *firstString, char *secondString)
{
	while(*firstString || *secondString)
	{
		if(*firstString != *secondString) return 0;
		*firstString++;
		*secondString++;
	}
	return 1;
}

main()
{
	int result_char, result_wchar_t;
	char *firstString = "TakieSame";
	char *secondString = "TakieSame";
	
	wchar_t *firstWString = L"Ciag wchar_t";
	wchar_t *secondWString = L"Ciag wchar_t";
	
	result_char = porownaj_char(firstString, secondString);
	result_wchar_t = porownaj_wchar_t(firstWString, secondWString);
	
	if(result_char == 1) printf("Ciagi char sa takie same!");
	else printf("Ciagi char sa rozne!");
	if(result_wchar_t == 1) printf("Ciagi wchar_t sa takie same!");
	else printf("Ciagi wchar_t sa rozne!");
	
		
	printf("\n\n");
	system("PAUSE");
	return 0;
}