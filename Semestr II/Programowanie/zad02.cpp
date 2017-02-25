/*
Napisz program, który sprawdzi czy punkt nale¿y do ko³a.
U¿ytkownik podaje wspó³rzêdne punktu, wspó³rzêdne œrodka ko³a oraz d³ugoœæ jego promienia.
Zabezpiecz program tak, by u¿ytkownik nie móg³ wprowadziæ wartoœci mniejszej b¹dŸ równej 0 dla d³ugoœci promienia.
*/

#include<iostream>
#include<string>
using namespace std;
class Circle
{
	double centerX;
	double centerY;
	double r;

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
		} while (r<=0);
	}
	void distance(double x, double y)
	{
		double d;
		d = sqrt((x - centerX)*(x - centerX) + (y - centerY)*(y - centerY));
		if(d > r) 
		{
			cout << "\nPunkt nie nalezy do kola, a jego odleglosc od srodka wynosi: " << d;
		}
		else 
		{
			cout << "\nPunkt nalezy do kola, a jego odleglosc od srodka wynosi: " << d;
		}
	}
};
class Point
{
public:
	double pointX;
	double pointY;

	Point()
	{
		cout << "\nPodaj wspolrzedna X punktu: ";
		cin >> pointX;
		cout << "\nPodaj wspolrzedna Y punktu: ";
		cin >> pointY;
	}
};

int main()
{
	Circle kolo;
	Point punkt;
	kolo.distance(punkt.pointX, punkt.pointY);
	cout << endl;
	return 0;
}