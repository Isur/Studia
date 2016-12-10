#include<stdio.h>
#include<math.h>
/*
	Napisz program, który pobiera od użytkownika liczbę naturalną n (unsigned int)
	oraz liczbę naturalną m z zakresu 1 do 32. Następnie:
		a) zapala m-ty bit liczby n,
		b) gasi m-ty bit liczby n,
		c) robi negację m-tego bitu liczby n,
		d) przesuwa bity liczby n w prawo o m pozycji,
		e) przesuwa bity liczby n w lewo o m pozycji,
	Po każdej z wymienionych operacji program wyświetla liczbę n w postaci dziesiętnej
	i binarnej.
*/
void decToBin(unsigned int number)
{
	unsigned int check = 32768, x = 0;
	printf(" Liczba %u w postaci binarnej: ", number);
	while (check > 0)
	{
		if ((number & check) == 0)
		{
			if (x == 1)
			{
				printf("0");
			}
		}
		else
		{
			x = 1;
			printf("1");
		}
			
		check >>= 1;
	}
	
}
// Funkcja potegowania w celu znalezienia odpowiedniego bitu
int power(int a, int b)
{
	int i = 0;
	if (b <= a)
	{
		a = b;
	}
	for (i = 2; i < b; i++)
	{
		a *= 2;
	}	
	return a;
}
void turnOnBit(unsigned int number, unsigned int m)
{
	printf("\n A - zapalenie m-tego bitu dla liczby n.\n Zapalono %u bit dla liczby %u. \n", m, number);
	number |= power(2, m);
	decToBin(number);
}
void turnOffBit(unsigned int number, unsigned int m)
{
	printf("\n B - zgaszenie m-tego bitu dla liczby n.\n Zgaszono %u bit dla liczby %u. \n", m, number);
	number &= ~power(2, m);
	decToBin(number);
}
void negationOfBit(unsigned int number, unsigned int m)
{
	printf("\n C - Negacja m-tego bitu dla liczby n.\n Zngeowano %u bit dla liczby %u. \n", m, number);
	number ^= power(2, m);
	decToBin(number);
}
void rightShift(unsigned int number, unsigned int m)
{
	printf("\n D - Przesuniecie m bitow w prawo liczby n.\n Przesunieto %u bitow liczby %u  w prawo. \n", m, number);
	number >>= m;
	decToBin(number);
}
void leftShift(unsigned int number, unsigned int m)
{
	printf("\n E - Przesuniecie m bitow w lewo liczby n.\n Przesunieto %u bitow liczby %u  w lewo. \n", m, number);
	number <<= m;
	decToBin(number);
}
main()
{
	unsigned int n = 0, m = 0;				// liczby podane przez uzytkownika
	printf("\n Podaj liczbe naturalna: ");
	scanf("%u", &n);
	printf(" Podaj liczbe naturalna z zakresu 1-32: ");
	scanf("%u", &m);
	printf("---------------------\n");
	// zamiana na liczbe binarna i jej wyswietlenie
	decToBin(n);	
	printf("\n---------------------");
	// A - zapalenie m-tego bitu i wyswieltenie
	turnOnBit(n, m);
	printf("\n---------------------");
	// B - zgaszenie m-tego bitu i wyswietlenie
	turnOffBit(n, m);
	printf("\n---------------------");
	// C - negacja m-tego bitu i wyswietlenie
	negationOfBit(n, m);
	printf("\n---------------------");
	// D - przesuniecie o m bitow w prawo i wyswietlenie
	rightShift(n, m);
	printf("\n---------------------");
	// E - przesuniecie o m bitow w lewo i wyswietlenie
	leftShift(n, m);
	printf("\n---------------------");
	printf("\n");
	system("PAUSE");
	return 0;
}