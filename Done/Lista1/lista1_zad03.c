#include<stdio.h>
#include<stdlib.h>

main()
{
	int ilosc = 0, i = 0, j = 0;
	printf("Podaj ile gwiazdek: ");
	scanf("%d", &ilosc);
	for (i = 0; i < ilosc; i++)
	{
		for (j = i; j < ilosc; j++ )
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	system("PAUSE");
	return 0;
}