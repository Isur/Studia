/*
Napisz program, kt�ry wczyta znak z klawiatury i wy�wietli na ekranie wczytany
znak oraz jego kod ASCII w postaci dziesi�tnej, szesnastkowej i �semkowej.
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

