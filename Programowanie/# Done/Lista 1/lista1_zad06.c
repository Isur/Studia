#include<stdio.h>
#include<stdlib.h>

main()
{
	int ilosc = 0, wiersze = 1, i = 1;
	printf("Podaj wielkosc szachownicy: ");
	scanf("%d", &ilosc);

	for (i; i <= ilosc; i++)
	{
		if (wiersze % 2 == 0)
		{
			if (i % 2 == 0)
			{
				printf("#");
				if (ilosc - i == 0 && wiersze < ilosc)
				{
					wiersze++;
					i = 0;
					printf("\n");
				}
			}
			else
			{
				printf(" ");
				if (ilosc - i == 0 && wiersze < ilosc)
				{
					wiersze++;
					i = 0;
					printf("\n");
				}
			}
		}
		else
		{
			if (i % 2 == 1)
			{
				printf("#");
				if (ilosc - i == 0 && wiersze < ilosc)
				{
					wiersze++;
					i = 0;
					printf("\n");
				}
			}
			else
			{
				printf(" ");
				if (ilosc - i == 0 && wiersze < ilosc)
				{
					wiersze++;
					i = 0;
					printf("\n");
				}
			}
		}
	}
	printf("\n");
	system("PAUSE");
	return 0;
}