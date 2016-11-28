/*
Napisz program, który wczyta znak z klawiatury i wyœwietli na ekranie wczytany
znak oraz jego kod ASCII w postaci dziesiêtnej, szesnastkowej i ósemkowej.
*/

#include<stdio.h>
main()
{
    char c;
    printf("\nPodaj znak: ");
    scanf("%c", &c);
    printf("\nZnak [%c] w kodzie ASCII to\n dziesietna: %d\n szesnastkowa: %x \n i osemkowa: %o \n", c, c, c,c  );
    system("PAUSE");
    return 0;
}

