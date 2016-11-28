
/* Napisz program który wyœwietli na ekranie N liczb losowych. N oraz zakres liczb
podawane s¹ z klawiatury. */
#include<stdio.h>
#include<stdlib.h>
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
main()
{
    srand(time(NULL));
    int n = 0, min = 0, max = 0, i = 0;
    printf("\n Podaj ile liczb chcesz losowac: ");
    scanf("%d", &n);
    printf("\n Podaj od jakiej liczby chcesz losowac: ");
    scanf("%d", &min);
    printf("\n Podaj do jakiej liczby chcesz losowac: ");
    scanf("%d", &max);

    for(i = 0; i < n; i++)
    {
        printf("\n %d", random(min, max));
    }
    printf("\n");
    system("PAUSE");
    return 0;
}
