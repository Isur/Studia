/*
Napisz definicję funkcji o prototypie
int dopisz( char *s, char *t );
która na końcu łańcucha s dopisuje zawartość łańcucha t. Oprócz s i t nie używaj
innych zmiennych lokalnych. Nie korzystaj z biblioteki string.h.
*/
#include<stdio.h>
int dopisz(char *s, char *t)
{

    while(*s) *s++;
    while(*t) *s++ = *t++;
    *t = '\0';
    
    return 1;
}
main()
{
	char s[30] = "pierwsze", *t = "Drugie";
	dopisz(s, t);
    printf("\n %s \n", s);

    printf("\n\n");
	system("PAUSE");
	return 0;
}