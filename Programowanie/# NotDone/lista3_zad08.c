/*
Napisz program, który wypisze losową permutację zbioru n elementowego
(n < 100). Permutacja będzie wypisywana na ekran w postaci dolnego wiersza zapisu
tabelowego
*/
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int random(int min, int max)
{
    int tmp;
    if (max >= min)
        max -= min;
    else
    {
        tmp = min - max;
        min = max;
        max = tmp;
    }
    return max ? (rand() % max + min) : min;
}

int strong(int n)
{
    int i = 0, strong = 1;
    for(i = 1; i <= n; i++)
    {
        strong *= i;
    }
    return strong;
}

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void permutation(int *arrayContent, int startPosition, int arraySize, int **perm)
{
	int i, j = 0;


	if (startPosition == arraySize)
	{
		for (j = 0; j <= arraySize; j++)
		{
			perm[startPosition][j] = arrayContent[j];
		}
	}
	else
	{
		for (i = startPosition; i <= arraySize; i++)
		{
			swap((arrayContent + startPosition), (arrayContent + i));
			permutation(arrayContent, startPosition+1, arraySize, perm);
			swap((arrayContent + startPosition), (arrayContent + i));
		}
	}
}

main()
{
    srand(time(NULL));
    int n = 0, i = 0, j = 0, quantity = 0,x = 0;
    int *tab = NULL, **perm = NULL;
    printf("Podaj ilosc elementow: ");
    scanf("%d", &n);
    tab = calloc(sizeof(int), n);
    for(i = 0; i < n; i++)
    {
        tab[i] = i+1;
    }
    quantity = strong(n);
    perm=(int **) malloc(quantity*sizeof(int *));
    for(i=0;i<quantity;i++)   perm[i]=(int *) malloc(n*sizeof(int));

    permutation(tab, 0, n-1, perm);
    x = random(0,n+1);
    for(j = 0; j < n; j++)
    {
        printf("%d ", perm[x][n]);
    }


    free(tab);
    free(perm);
    printf("\n\n");
    system("PAUSE");
    return 0;
}
