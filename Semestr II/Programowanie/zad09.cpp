/*
Zadanie:
Napisz program wykorzystuj�cy mechanizm "try throw catch". Program powinien:
1) zawiera� funkcj� dzielenia z obs�ug� wyj�tku dzielenia przez zero.
2) zawiera� funkcj� modulo z obs�ug� wyj�tku gdzie wprowadzone dwie zmienne s� r�wne b�dz s� swoimi wielokrotno�ciami.

W sytuacji kiedy wprowadzane dane s� prawid�owe, program powinien wy�wietla� wyniki. 
W sytuacji gdy dane s� niedozwolone powinien pojawi� si� stosowny komunikat. 
Obs�uga obu wyj�tk�w ma dzia�a� niezale�nie od siebie 
(wywo�anie komunikatu wyj�tku dla jednej funkcji nie mo�e powodowa� zatrzymania dzia�ania drugiej funkcji).

*/
#include<iostream>
using namespace std;

class Division
{
public:
	int a;
	int b;
	class ExceptionDivision {};
	class ExceptionModulo {};
	void division()
	{
		if (this->b == 0)
		{
			throw ExceptionDivision();
		}
		else
		{
			cout << "Dzielenie: " << (double) this->a / this->b << endl;
		}
	}

	void modulo()
	{
		if (this->a % this->b  == 0 || this->b % this->a == 0)
		{
			throw ExceptionModulo();
		}
		else
		{
			cout << "Modulo: " << this->a % this->b << endl;
		}
	}

	Division(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
};

int main()
{
	int a, b;
	cout << "\nPodaj liczbe: "; cin >> a;
	cout << "\nPodaj liczbe: "; cin >> b;
	Division *d = new Division(a,b);
	try
	{
		d->division();
		d->modulo();
	}
	catch (Division::ExceptionDivision)
	{
		cout << "Nie mozna dzielic przez ZERO!";
	}
	catch (Division::ExceptionModulo)
	{
		cout << "Nie podawaj tej samej liczby ani wielokrotnosci!";
	}

	cout << endl;
	return 0;
}