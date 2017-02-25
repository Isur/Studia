/* Napisz program dla dzieci, który testuje czy umieją one dodawać do 100. Program np. pyta "Jaka jest suma liczb 23+61 = ?". Dziecko udziela odpowiedzi. Następnie program odpowiada: "Dobrze/Niestety źle" i pyta "Czy bawimy się dalej
[T/N]?" Liczby używane mają być losowe. Pamiętać należy, że suma nie może być
większa niż 100..*/
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
    char menuSelect;
    srand(time(0));
    do
    {
        do
        {
            a = random();
            b = random();
        }while(a + b >= 100);
        printf(" \nPodaj sume liczb %d + %d\n", a,b);
        scanf("%d", &wyn);
        getchar();
        if(wyn == a + b) printf("\nBrawo!");
        else printf("\nZle");
        printf("\n Bawimy sie dalej?[t/n]");
        scanf("%c", &menuSelect);
    }while(menuSelect == 't' || menuSelect == 'T');


    printf("\n\n");
    system("PAUSE");
    return 0;
}
