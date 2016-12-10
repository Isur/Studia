/*
Napisz program, który generuje losowy znak ze zbioru liter {a, b, c, . . . , z}.
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
    int randomChar;
    randomChar = random(97,123);
    printf("%c", randomChar);
    printf("\n\n");
    system("PAUSE");
    return 0;
}
