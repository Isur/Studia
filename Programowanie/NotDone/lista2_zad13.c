#include<stdio.h>

void array(int n, int k)
{
    int *p = NULL;
    int i = 0;
    p = calloc(n, sizeof(int));
    for(i = 0; i < n; i++)
    {
        p[i] = i+1;
    }

    free(p);
}

main()
{
    int n = 0, k = 0;
    printf("Podaj ilosc elementow: ");
    scanf("%d", &n);
    printf("Podaj dlugosc podzbiorow: ");
    scanf("%d", &k);

    array(n,k);
}
