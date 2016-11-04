#include<stdio.h>
#include<math.h>
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
	unsigned int n = 0, m = 0;
	printf("\n Podaj liczbe naturalna: ");
	scanf("%u", &n);
	printf(" Podaj liczbe naturalna z zakresu 1-32: ");
	scanf("%u", &m);
	printf("---------------------\n");
	decToBin(n);
	printf("\n---------------------");
	turnOnBit(n, m);
	printf("\n---------------------");
	turnOffBit(n, m);
	printf("\n---------------------");
	negationOfBit(n, m);
	printf("\n---------------------");
	rightShift(n, m);
	printf("\n---------------------");
	leftShift(n, m);
	printf("\n---------------------");
	printf("\n");
	system("PAUSE");
	return 0;
}