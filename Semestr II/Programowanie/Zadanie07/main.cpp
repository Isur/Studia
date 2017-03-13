/*
Zadanie:
1) wywo³aj szablon funkcji max().
2) Na jego podstawie zbuduj szablon zwracaj¹cy wartoœæ najwiêksz¹ z trzech podanych argumentów.
3) Zbuduj szablon klasy walec i utwórz w nim szablon metody obliczaj¹cej pole powierzchni dla ró¿nych typów danych.
Cia³o metody powinno znaleŸæ siê poza klas¹.
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
