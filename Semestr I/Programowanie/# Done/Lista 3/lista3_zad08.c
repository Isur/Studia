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
    if (max>=min)
        max-= min;
    else
    {
        tmp= min - max;
        min= max;
        max= tmp;
    }
    return max ? (rand() % max + min) : min;
}

void randomPermutation(int *p, int n)
{
    int i = 0, j = 0;
    int temp = 0, check = 0;
    int *t = NULL;
    t = calloc(n, sizeof(int));
    for(i = 0; i < n; i++)
    {
        do
        {
            temp = random(0,n);
            for(j = 0; j < i; j++)
            {
                if(t[j] != temp)
                {
                    check = 0; 
                }
                else 
                {
                    check = 1;
                    break;
                }
            }
        }while(check == 1);
        t[j] = temp;
    }
    printf("\n Losowa permutacja: \n {");
    for(i = 0; i < n; i++)
    {
        printf(" %d", t[i]);
    }
    printf("}");
    free(t);
}
void createSet(int *p, int n)
{
    int i = 0;
    p = calloc(n, sizeof(int));
    for(i = 0; i < n; i++)
    {
        p[i] = i;
    }
    printf("\n Zbior: \n {");
    for(i = 0; i < n; i++)
    {
        printf(" %d", p[i]);
    }
    printf("}");
}

main()
{
    srand(time(NULL));
    int n = 0; 
    int *p = NULL;
    do
    {
        printf("\n Ilu elementowy ma byc zbior?");
        scanf("%d", &n);
    }while(n >=100 || n < 1); 
    
    createSet(p, n);
    randomPermutation(p, n);
    free(p);
    
    printf("\n\n");
    system("PAUSE");
    return 0;
}