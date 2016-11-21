/*
Napisz definicję funkcji o prototypie
int porownaj( char *s, char *t );
która sprawdza czy podane łańcuchy są takie same. Funkcja zwraca 1 jeśli są takie
same, w przeciwnym razie zwraca 0. Oprócz s i t nie używaj innych zmiennych
lokalnych. Nie korzystaj z biblioteki string.h.
*/
#include<stdio.h>
int porownaj(char *s, char *t)
{
    while(*t || *s)
    {
	if(*s == *t)
    {
        *s++;
        *t++;
    }
    else
        return 0;
    }
    return 1;
}
main()
{
	char s[1024], t[1024];
	printf("Podaj lancuch s: ");
	fgets(s, 1024, stdin);
	printf("Podaj lancuch t: ");
	fgets(t, 1024, stdin);

	printf("\n%d\n", porownaj(s, t));
	system("PAUSE");
	return 0;
}
