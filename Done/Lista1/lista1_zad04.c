#include<stdio.h>
#include<stdlib.h>

main()
{
	int height = 0, poz = 0, i = 0, j = 0;
	printf("Podaj wysokosc choinki: ");
	scanf("%d", &height);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < (i * 2 - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	poz = (height - 2) ;
	for (i = 0; i <= poz; i++)
	{
		printf(" ");
	}
	printf("#\n");
	for (i = 0; i <= height*2-1; i++)
	{
		printf("_");
	}
	printf("\n");
	system("PAUSE");
	return 0;
}