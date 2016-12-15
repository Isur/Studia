/*
Pomiar czasu. Program zadaje pytanie: Jak Ci na imie?
Czeka na odpowiedź. Gdy użytkownik ją wprowadzi, to program wypisuje (przykładowo): Otrzymalem imie Adam po uplywie 2.34 sekundy.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
main()
{
	char name[20];
	clock_t start, stop;
	double time;
	start = clock();
	printf("\nJak Ci na imie?");
	fgets(name, 20, stdin);
	name[strlen(name) -1] = '\0';
	stop = clock();
	time = (double) (stop - start)/CLOCKS_PER_SEC;

	printf("\nOtrzymalem imie %s po uplywie %.2lf sekund", name, time);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}