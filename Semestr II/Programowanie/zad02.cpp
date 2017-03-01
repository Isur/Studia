/*
Napisz program, kt�ry sprawdzi czy punkt nale�y do ko�a.
U�ytkownik podaje wsp�rz�dne punktu, wsp�rz�dne �rodka ko�a oraz d�ugo�� jego promienia.
Zabezpiecz program tak, by u�ytkownik nie m�g� wprowadzi� warto�ci mniejszej b�d� r�wnej 0 dla d�ugo�ci promienia.
*/

#include<iostream>
#include<string>
using namespace std;

class Circle
{
	double centerX;
	double centerY;
	double r;

	friend class Point;
	friend void distance(Circle &, Point &);

public:
	Circle()
	{
		cout << "\nPodaj wspolrzedna X srodka kola: ";
		cin >> centerX;
		cout << "\nPodaj wspolrzedna Y srodka kola: ";
		cin >> centerY;
		do
		{
			if (r <= 0) cout << "\nPromien musi byc wiekszy niz ZERO!";
			cout << "\nPodaj promien kola: ";
			cin >> r;
		} while (r <= 0);
	}
};

class Point
{
	double pointX;
	double pointY;

	friend void distance(Circle &, Point &);
public:
	Point()
	{
		cout << "\nPodaj wspolrzedna X punktu: ";
		cin >> pointX;
		cout << "\nPodaj wspolrzedna Y punktu: ";
		cin >> pointY;
	}
};

void distance(Circle & c, Point & p)
{
	double d;
	d = sqrt((p.pointX - c.centerX)*(p.pointX - c.centerX) + (p.pointY - c.centerY)*(p.pointY - c.centerY));
	if (d > c.r)
	{
		cout << "\nPunkt nie nalezy do kola, a jego odleglosc od srodka wynosi: " << d;
	}
	else
	{
		cout << "\nPunkt nalezy do kola, a jego odleglosc od srodka wynosi: " << d;
	}
}

int main()
{
	Circle kolo;
	Point punkt;
	distance(kolo, punkt);
	cout << endl;
	return 0;
}