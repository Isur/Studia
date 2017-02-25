#include<stdio.h>
#include<stdlib.h>

int firstNumberTest(int a)
{
	int i = 0;
	if (a == 2)
		return 1;
	if (a > 2 && a % 2 == 0)
		return 0;
	for (i = 3; i < a; i+=2)
	{
		if (a%i== 0)
		{
			return 0;
		}
	}
	return 1;
}
main()
{
	int firstNumber = 0, i = 0;
	do
	{
		printf("Podaj liczbe, ktorej pierwszosc nalezy sprawdzic: \n");
		scanf("%d", &firstNumber);
		if (firstNumber > 1)
			i = firstNumberTest(firstNumber);
		else
			printf("Musi byc wieksza od 1!");
	} while (firstNumber <= 1);
	if (i == 1)
		printf("Liczba jest liczba pierwsza \n");
	else
		printf("Liczba nie jest pierwsza \n");

	system("PAUSE");
	return 0;
}