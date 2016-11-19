#include<stdio.h>
#include<stdlib.h>
/*
    Napisz program, który znajduje wszystkie podzbiory k - elementowe zbioru
    {1, 2, . . . , n}. Użytkownik podaje liczby n i k. Program wypisuje podzbiory, 
    np. dla n = 3, k = 2 wypisze:
        {1, 2}
        {1, 3}
        {2, 3}
*/
// losowanie liczb

void sort(int *array, int size)
{
    int i = 0, j = 0, temp = 0;
    for (j = size - 1; j >= 0; j--)
    {
        for (i = size - 1; i >= 0; i--)
        {
            if (array[i] < array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

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
// kombinacje
void combination(int *p, float combinations, int k, int n)
{
    int arrayOfCombinations[1024][1024];    // tablica z ktora bedzie przechowywac wszystkie mozliwe kombinacje
    int temp[1024], temp2[1024];            // do przechowywania i sprawdzania liczb wylosowanych
    int i = 0, j = 0, z = 0, y = 0;         // zmienne pomocnicze
    int check = 0;                          // sprawdzanie czy sie nie powtarza
    printf("\nIlosc kombinacji: %.0f \n", combinations);
    for(i = 0; i < combinations; i++)
    {
        for(j = 0; j < k; j++)
        {
            do
            {
                check = 0;
                temp[j] = random(0,n);
                for(z = 0; z < j; z++)
                {
                    if(temp[j] == temp[z] )
                    {
                        check = 1;
                    }
                }
            }while(check == 1);
        }
        sort(temp, k);
        if(i > 0)
        {
            for(z = 0; z < i; z++)
            {
                y = 0;
                for(j = 0; j < k; j++)
                {
                    temp2[j] = arrayOfCombinations[z][j];
                } 
                for(j = 0; j < k; j++)
                {
                    if(temp2[j] == temp[j])
                    {
                        y++;
                    }
                }
                if(y == 8)
                    break;
            }
        }
        if (y == 8)
        {
            i--;
            continue;
        }
        else
        {
            for(j = 0; i < k; j++)
            {
                arrayOfCombinations[i][j] = temp[j];
            }
        }
    }

    for(i = 0; i < combinations; i++)
    {
        printf("\n{");
        for(j = 0; j < k; j++)
        {
            printf(" %d ", arrayOfCombinations[i][j]);
        }
        printf("}");
    }
}
// silnia
float strong(int n)
{
    int i = 1;
    float strong = 1.0;
    for(i = 1; i <= n; i++)
    {
        strong = i*strong;
    }
    return strong;
}

// Sprawdzenie ilosci kombinacji
float howManyCombination(int n, int k)
{
    return (strong(n))/(strong(k)*strong(n-k));
}
// dynamicznie tworzona tablica na potrzeby programu
void array(int n, int k, float combinations)
{
    int *p = NULL;              // wskaznik do tablicy
    int i = 0;                  // pomocnicza
    p = calloc(n, sizeof(int));
    for(i = 0; i < n; i++)
    {
        p[i] = i+1;
    }    
    combination(p, combinations, k, n);

    free(p);
}

main()
{
    int n = 0, k = 0;       // zmienne dla ilosci elementow zbioru i ilosci elementow podzbiorow i 
    float combinations = 0.0;    // ilosc kombinacji
    // pobierane ilosci od uzytkownika
    printf("Podaj ilosc elementow: ");
    scanf("%d", &n);
    printf("Podaj dlugosc podzbiorow: ");
    scanf("%d", &k);
    combinations = howManyCombination(n, k);
    array(n, k, combinations);

    system("PAUSE");
    return 0;
}
