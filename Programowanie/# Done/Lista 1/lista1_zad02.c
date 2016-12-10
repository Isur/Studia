#include<stdio.h>
#include<stdlib.h>

main()
{
	int ilosc = 0, i = 0;
	printf("Podaj ilosc gwiazdek: \n");
	scanf("%d", &ilosc);

	for (i = 0; i < ilosc; i++)
	{
		printf("*");
	}
	printf("\n");
	system("PAUSE");
	return 0;
}