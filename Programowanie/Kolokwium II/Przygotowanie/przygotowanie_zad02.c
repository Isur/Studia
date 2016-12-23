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

struct Dane
{
	int tp;
	union Liczba
	{
		int c;
		double z;
	}zaw;
}dane;

void addData()
{
	char ask;
	printf("\n1. Calkowita lub 2. Wymierna?: ");		
	scanf("%c", &ask);
	printf("\nPodaj ta liczbe: ");
	if(ask == '1') 
	{
		dane.tp = 0;
		scanf("%d", &dane.zaw.c);
	}
	else if(ask == '2') 
	{
		dane.tp = 1;
		scanf("%lf", &dane.zaw.z);
	}
}

main()
{

addData();
if(dane.tp == 0) printf("%d", dane.zaw.c);
if(dane.tp == 1) printf("%lf", dane.zaw.z);

printf("\n\n");
system("PAUSE");
return 0;
}