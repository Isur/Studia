/*
Zadanie
1) Utwórz dowoln¹ klasê.
2) W ramach klasy utwórz konstruktor domyœlny, parametryczny oraz destruktor.
Zademonstruj w wybrany przez siebie sposób dzia³anie konstruktorów oraz destruktora tworz¹c obiekty poza funkcj¹ main(), 
w ramach funkcji main, z podaniem i bez podania argumentów oraz za pomoc¹ opearatora new.
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