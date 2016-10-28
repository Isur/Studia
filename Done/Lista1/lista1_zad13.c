#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	int result = 0, i = 0, number = 0;
	printf("Podaj liczbe: \n");
	scanf("%d", &number);
	do
	{
		result += number % 10;
		number /= 10;
	} while (number > 0);


	printf("%d \n", result);
	system("PAUSE");
	return 0;
}