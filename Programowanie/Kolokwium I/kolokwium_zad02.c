/*Napisz program, który wyœwietli na ekranie losow¹ liczbê z zakresu od 1 do
100 i wyœwietli informacjê, czy jest to liczba parzysta oraz czy jest to liczba
podzielna przez 3. */

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
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
main()
{
    srand( time( NULL ) );
    int liczba = 0;
    liczba = random(1,100);
    printf("Losowana liczba to: %d\n", liczba);
    if(liczba %2 == 0)
    {
        if(liczba %3 == 0)
        {
            printf("\nLiczba %d jest parzysta oraz podzielna przez 3", liczba);
        }
        else
        {
            printf("\nLiczba %d jest parzysta ale nie podzielna przez 3", liczba);
        }
    }
    else if(liczba %3 == 0)
    {
        printf("\nLiczba %d nie jest parzysta ale podzielna przez 3", liczba);
    }
    else
    {
        printf("\nLiczba %d nie jest parzysta oraz nie jest podzielna przez 3", liczba);
    }
}
