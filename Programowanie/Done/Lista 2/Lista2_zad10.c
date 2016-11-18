#include<stdio.h>
/*
	Napisz program, który pobiera od użytkownika liczbę naturalną (unsigned int)
	a następnie wypisuje ją w postaci binarnej, oraz podaje ilość zer i jedynek z tej reprezentacji. Program należy napisać używając operatorów bitowych i nie korzystając
	z operatorów / i %.
*/
main()
{
	unsigned int number = 0, check = 2147483648;	// zmienna dla liczby podanej przez uzytkownika, oraz dla sprawdzania po bitach
	int quantityOfZero = 0, quantityOfOne = 0;		//ilosc zer i jedynek
	// pobieranie od uzytkownika liczby
	printf("Podaj liczbe do zamiany na binarne: ");
	scanf("%u", &number);
	// porownywanie liczb bit po bicie
	while (check > 0)
	{
		if ((number & check) == 0)
		{
			printf("0");
			if (quantityOfOne > 0)
				quantityOfZero++;
		}
		else
		{
			if (quantityOfOne == 0) // Wypisanie komunikatu po napotkaniu pierwszej '1':
			{
				system("CLS");
				printf("Liczba %u w systemie binarnym: ", number);
			}
			printf("1");
			quantityOfOne++;
		}
		check >>= 1 ; // przesuniecie bitu o 1 pozycje w prawo
	}

	printf("\n Ilosc zer: \t\t %d \n Ilosc jedynek: \t %d\n", quantityOfZero, quantityOfOne);
	
	system("PAUSE");
	return 0;
}