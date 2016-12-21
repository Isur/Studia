// NOT DONE!!

/*
Zdefiniuj unię Liczba, która może służyć w zależności od potrzeb do przechowywania liczby wymiernej lub liczby całkowitej. 
Zdefiniuj strukturę Dane, o dwóch polach polu tp typu int oraz polu zaw typu Liczba. 
Napisz bezargumentową funkcję, która wczytuje ze standardowego wejścia zawartość do 
struktury Dane i zwraca ją jako wartość. Funkcja powinna pytać użytkownika, 
czy chcewczytać liczbę całkowitą, czy wymierną oraz w zależności od jego wyboru 
wstawić do pola tp wartość 0 lub 1. Następnie funkcja powinna wczytać do pola zawwartość odpowiedniego typu.
*/

#include<stdio.h>


union Liczba
{
	int c;
	double z;
}zaw;

struct Dane
{
	int tp;
	union Liczba zaw;

}dane;

void addData()
{
	char wyb;
	printf("Calkowita czy wymierna? [1/2]: ");
	scanf("%c", &wyb);
	if(wyb == '1')
	{
		dane.tp = 1;
		printf("\n Podaj liczbe calkowita: ");
		scanf("%d", &zaw.c);
	}
	else if(wyb == '2')
	{
		dane.tp = 0;
		printf("\n Podaj liczbe wymierna: ");
		scanf("%lf", &zaw.z);
	}
	
}

main()
{


addData();
printf("%d", zaw.c);

printf("\n\n");
system("PAUSE");
return 0;
}