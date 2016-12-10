/* Napisz program dla dzieci, który testuje czy umiej¹ one dodawaæ do 100. Program np. pyta "Jaka jest suma liczb 23+61 = ?". Dziecko udziela odpowiedzi. Nastêpnie program odpowiada: "Dobrze/Niestety Ÿle" i pyta "Czy bawimy siê dalej
[T/N]?" Liczby u¿ywane maj¹ byæ losowe. Pamiêtaæ nale¿y, ¿e suma nie mo¿e byæ
wiêksza ni¿ 100.*/
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
