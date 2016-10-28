#include<stdio.h>
#include<stdlib.h>

main()
{
	int ilosc = 0, j = 1, i = 0;
	printf("Podaj wielkosc szachownicy: ");
	scanf("%d", &ilosc);
	for (i = 1; i <= ilosc; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 1; j <= ilosc; j++)
			{
				if (j % 2 == 0)
				{
					printf(" ");
				}
				else
				{
					printf("#");
				}
			}
		}
		else
		{
			for (j = 1; j <= ilosc; j++)
			{
				if (j % 2 == 1)
				{
					printf(" ");
				}
				else
				{
					printf("#");
				}
			}
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}