#include<stdio.h>
#include<stdlib.h>

main()
{
	int size = 0, i = 0, j = 0;
	printf("Podaj wymiar tabliczki mnozenia: \n");
	scanf("%d", &size);

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			printf("%d \t", j*i);
		}
		printf("\n");
	}

	system("PAUSE");
	return 0;
}