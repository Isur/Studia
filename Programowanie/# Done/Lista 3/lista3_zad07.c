/*
Napisz program, który wyświetla losowo wybrane słowo ze zbioru
{kotek, domek, myszka, pies} .
programie tym nie używaj instrukcji if i switch.
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
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

main()
{
    srand(time(NULL));
    char *array[] = {"kotek", "domek", "myszka", "pies"};
    int randomPosition = 0;
    randomPosition = random(0,4);
    printf("%s", array[randomPosition]);
    printf("\n\n");
    system("PAUSE");
    return 0;
}
