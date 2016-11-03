#include<stdio.h>

main()
{
	unsigned int number = 0, check = 32768;
	int quantityOfZero = 0, quantityOfOne = 0;
	printf("Podaj liczbe do zamiany na binarne: ");
	scanf("%u", &number);

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
			if (quantityOfOne == 0)
			{
				system("CLS");
				printf("Liczba %u w systemie binarnym: ", number);
			}
			printf("1");
			quantityOfOne++;
		}
		check >>= 1 ;
	}

	printf("\n Ilosc zer: \t\t %d \n Ilosc jedynek: \t %d\n", quantityOfZero, quantityOfOne);
	
	system("PAUSE");
	return 0;
}