/*
Zadanie:
1) wywo�aj szablon funkcji max().
2) Na jego podstawie zbuduj szablon zwracaj�cy warto�� najwi�ksz� z trzech podanych argument�w.
3) Zbuduj szablon klasy walec i utw�rz w nim szablon metody obliczaj�cej pole powierzchni dla r�nych typ�w danych.
Cia�o metody powinno znale�� si� poza klas�.
*/
#include<iostream>
#include<stdlib.h>
#include "src/max.cpp"
#include "src/Walec.cpp"
using namespace std;
int main()
{
	Walec<int, int> *w1 = new Walec<int, int>(5,7);
	Walec<float, float> *w2 = new Walec<float, float>(5.17, 7.86);
	cout << "\n Pole powierzchni walca1: " << w1->field();
	cout << "\n Pole powierzchni walca2: " << w2->field();
	cout << "\nMax: " << max(7.5, 16.9, 5.7);
	cout << endl;
	system("PAUSE");
	return 0;
}
