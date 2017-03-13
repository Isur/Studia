/*
Zadanie:
Wybierz cztery operatory, kt�re b�dziesz prze�adowywa� (dwa jednoargumentowe oraz dwa dwuargumentowe).
Nast�pnie napisz funkcje prze�adowuj�ce.
Ka�dy typ operatora powinien mie� utworzon� funkcj� w postaci funkcji globalnej oraz metody klasy.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class Number
{
public:
	int x;

	Number()
	{
		x = 1;
	}
	Number(int x)
	{
		this->x = x;
	}
	friend Number operator+(const Number& x, const Number& y);
	friend Number operator%(const Number& x, const Number& y);
	friend Number operator!(const Number& x);
	friend Number operator~(const Number& x);

	void show()
	{
		cout << this->x;
	}
};
Number operator+(const Number& x, const Number& y)
{
	return Number(x.x + y.x);
}
Number operator%(const Number& x, const Number& y)
{
	return Number(x.x % y.x);
}
Number operator!(const Number& x)
{
	return Number(-x.x);
}
Number operator~(const Number& x)
{
	int g = ~x.x;
	return Number(g);
}


int main()
{
	Number x(7);
	Number y(5);
	Number r(0);
	cout << "Obiekt 1: ";
	x.show();
	cout << endl;
	cout << "Obiekt 2: ";
	y.show();
	cout << "\nOperator 2-argumentowy + \n";
	r = x + y;
	r.show();
	cout << "\nOperator 2-argumentowy % \n";
	r = x % y;
	r.show();
	cout << "\nOperator 1-argumentowy ! (na obiekcie 1) \n";
	r = !x;
	r.show();
	cout << "\nOperator 1-argumentowy ~ (na obiekcie 1)\n";
 	r = ~x;
	r.show();

	cout << endl;
	system("pause");
	return 0;
}
