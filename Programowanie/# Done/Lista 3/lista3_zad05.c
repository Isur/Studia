/* Napisz program dla dzieci, kt�ry testuje czy umiej� one dodawa� do 100. Program np. pyta "Jaka jest suma liczb 23+61 = ?". Dziecko udziela odpowiedzi. Nast�pnie program odpowiada: "Dobrze/Niestety �le" i pyta "Czy bawimy si� dalej
[T/N]?" Liczby u�ywane maj� by� losowe. Pami�ta� nale�y, �e suma nie mo�e by�
wi�ksza ni� 100.*/
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int random()
{
    return 1 + rand() % 99;
}
main()
{
    int a = 0, b = 0, wyn = 0;
    srand(time(0));
    do
    {
        a = random();
        b = random();
    }while(a + b > 100);
    printf(" \nPodaj sume liczb %d + %d\n", a,b);
    scanf("%d", &wyn);
    if(wyn == a + b)
    {
        printf("\nBrawo!");
    }
    else
    {
        printf("\nZle");
    }
    system("PAUSE");
    return 0;
}
