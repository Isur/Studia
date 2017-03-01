/*
Zadanie:
Napisz program wykorzystuj¹cy mechanizm "try throw catch". Program powinien:
1) zawieraæ funkcjê dzielenia z obs³ug¹ wyj¹tku dzielenia przez zero.
2) zawieraæ funkcjê modulo z obs³ug¹ wyj¹tku gdzie wprowadzone dwie zmienne s¹ równe b¹dz s¹ swoimi wielokrotnoœciami.

W sytuacji kiedy wprowadzane dane s¹ prawid³owe, program powinien wyœwietlaæ wyniki. 
W sytuacji gdy dane s¹ niedozwolone powinien pojawiæ siê stosowny komunikat. 
Obs³uga obu wyj¹tków ma dzia³aæ niezale¿nie od siebie 
(wywo³anie komunikatu wyj¹tku dla jednej funkcji nie mo¿e powodowaæ zatrzymania dzia³ania drugiej funkcji).

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