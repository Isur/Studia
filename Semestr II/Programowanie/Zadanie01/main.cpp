/*
Zadanie
1) Utwórz dowoln¹ klasê.
2) W ramach klasy utwórz konstruktor domyœlny, parametryczny oraz destruktor.
Zademonstruj w wybrany przez siebie sposób dzia³anie konstruktorów oraz destruktora tworz¹c obiekty poza funkcj¹ main(),
w ramach funkcji main, z podaniem i bez podania argumentów oraz za pomoc¹ opearatora new.
*/

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class RandomClass
{
	int firstNumber;
	int secondNumber;
	string name;
public:
	RandomClass()
	{
		name = "Konstruktor";
		firstNumber = 1;
		secondNumber = 3;
		cout << name;
		cout << "\nNumer jeden: " << firstNumber << "\nNumer dwa: " << secondNumber << endl;
	}
	RandomClass(int a)
	{
		name = "Konstruktor z parametrem";
		firstNumber = a;
		secondNumber = 3;
		cout << name;
		cout << "\nNumer jeden: " << firstNumber << "\nNumer dwa: " << secondNumber << endl;
	}
	RandomClass(int a, int b)
	{
		name = "Konstruktor z parametrem";
		firstNumber = a;
		secondNumber = b;
		cout << name;
		cout << "\nNumer jeden: " << firstNumber << "\nNumer dwa: " << secondNumber << endl;
	}
	~RandomClass()
	{
		cout << "\nZniszczono " << name << " o numerku jeden: " << firstNumber << endl;
	}
};

RandomClass object3;

int main()
{
	int a;
	RandomClass object(2);
	RandomClass *c = new RandomClass(3);
	cout << "Podaj parametr: ";
	cin >> a;
	RandomClass object2(4, a);
	delete c;
	system("PAUSE");
	return 0;
}

RandomClass object5(5);
