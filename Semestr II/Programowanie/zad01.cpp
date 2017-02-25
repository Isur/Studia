/*
Zadanie
1) Utw�rz dowoln� klas�.
2) W ramach klasy utw�rz konstruktor domy�lny, parametryczny oraz destruktor.
Zademonstruj w wybrany przez siebie spos�b dzia�anie konstruktor�w oraz destruktora tworz�c obiekty poza funkcj� main(), 
w ramach funkcji main, z podaniem i bez podania argument�w oraz za pomoc� opearatora new.
*/

#include<iostream>
#include<string>
using namespace std;

class RandomClass
{
	int firstNumber;
	int secondNumber;
	string name;
public:
	RandomClass()
	{
		name = "Konstruktor \n";
		firstNumber = 1;
		secondNumber = 3;
		cout << name;
		cout << "Numer jeden: " << firstNumber << "\nNumer dwa: " << secondNumber << endl;
	}
	RandomClass(int a)
	{
		name = "Konstruktor z parametrem \n";
		firstNumber = a;
		secondNumber = 3;
		cout << name;
		cout << "Numer jeden: " << firstNumber << "\nNumer dwa: " << secondNumber << endl;
	}
	~RandomClass()
	{
		cout << "Zniszczono " << name;
	}
};
int main()
{
	int a;
	RandomClass object;
	cout << "Podaj parametr: \n";
	cin >> a;
	RandomClass object2(a);
	return 0;
}