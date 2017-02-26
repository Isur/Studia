/*
Utwórz nastêpuj¹ce klasy: Punkt, Kolo, Kwadrat, Walec, Prostopadloscian.
Zbuduj w odpowiedni sposób hierarchiê klas.
Dla ka¿dej klasy utwórz konstruktor domyœlny, parametryczny oraz destruktor.
Utwórz obiekty ka¿dej z klas w taki sposób, aby:
1) wywo³aæ wy³¹cznie konstruktory domyœlne.
2) wywo³aæ wy³¹cznie konstruktory parametryczne.
Efekty wywo³añ poka¿ w oknie konsoli.
*/
#include<iostream>
using namespace std;

class Punkt
{
protected:
	int x;
	int y;
public:
	Punkt()
	{
		cout << "\nPodaj wspolrzedna srodka X: ";
		cin >> this->x;
		cout << "\nPodaj wspolrzedna srodka Y: ";
		cin >> this->y;
	}
	Punkt(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	~Punkt()
	{
		cout << "\nZNISZCZONO PUNKT";
	}
	void printInfo()
	{
		cout << "\nWspolrzedna X: " << this->x;
		cout << "\nWspolrzedna Y: " << this->y;
	}
};

class Kolo: protected Punkt
{
protected:
	int r;
public:
	Kolo()
	{
		cout << "\nPodaj promien: ";
		cin >> this->r;
	}
	Kolo(int x, int y, int r):Punkt(x,y)
	{
		this->x = x;
		this->y = y;
		this->r = r;
	}
	~Kolo()
	{
		cout << "\nZNISZCZONO KOLO";
	}
	void printInfo()
	{
		cout << "\nWspolrzedna srodka X: " << this->x;
		cout << "\nWspolrzedna srodka Y: " << this->y;
		cout << "\nPromien: " << this->r;
	}
};

class Kwadrat:protected Punkt
{
protected:
	int a;
public:
	Kwadrat()
	{
		cout << "\nPodaj dlugosc boku: ";
		cin >> a;
	}
	Kwadrat(int x, int y, int a):Punkt(x,y)
	{
		this->x = x;
		this->y = y;
		this->a = a;
	}
	~Kwadrat()
	{
		cout << "\nZNISZCZONO KWADRAT";
	}
	void printInfo()
	{
		cout << "\nWspolrzedna srodka X: " << this->x;
		cout << "\nWspolrzedna srodka Y: " << this->y;
		cout << "\nDlugosc boku: " << this->a;
	}
};

class Walec: protected Kolo
{
protected:
	int c;
public:
	Walec()
	{
		cout << "\nPodaj wysokosc: ";
		cin >> this->c;
	}
	Walec(int x, int y, int r, int c):Kolo(x,y,r)
	{
		this->x = x;
		this->y = y;
		this->r = r;
		this->c = c;
	}
	~Walec()
	{
		cout << "\nZNISZCZONO WALEC";
	}
	void printInfo()
	{
		cout << "\nWspolrzedna srodka X: " << this->x;
		cout << "\nWspolrzedna srodka Y: " << this->y;
		cout << "\nPromien: " << this->r;
		cout << "\nWysokosc: " << this->c;
	}
};

class Prostopadloscian:protected Kwadrat
{
protected:
	int b;
	int c;
public:
	Prostopadloscian()
	{
		cout << "\nPodaj dlugosc boku podstawy b: ";
		cin >> b;
		cout << "\nPodaj wysokosc: ";
		cin >> c;
	}
	Prostopadloscian(int x, int y, int a, int b, int c):Kwadrat(x,y,a)
	{
		this->x = x;
		this->y = y;
		this->a = a;
		this->b = b;
		this->c = c;
	}
	~Prostopadloscian()
	{
		cout << "\nZNISZCZONO PROSTOPADLOSCIAN";
	}
	void printInfo()
	{
		cout << "\nWspolrzedna srodka podstawy X: " << this->x;
		cout << "\nWspolrzedna srodka podstawy Y: " << this->y;
		cout << "\nDlugosc boku podstawy a: " << this->a;
		cout << "\nDlugosc boku podstawy b: " << this->b;
		cout << "\nWysokosc: " << this->c;
	}
};

int main()
{
	cout << "\nPUNKT";
	Punkt point1, point(3, 4);
	cout << "\nKWADRAT";
	Kwadrat square1, square(2, 5, 7);
	cout << "\nKOLO";
	Kolo circle1, circle(3, 7, 5);
	cout << "\nWALEC";
	Walec cylinder1, cylinder(1, 7, 5, 3);
	cout << "\nPROSTOPADLOSCIAN";
	Prostopadloscian cuboid1, cuboid(1, 1, 1, 1, 1);
	system("cls");
	cout << "\nPunkt - konstruktor domyslny: ";
	point1.printInfo();
	cout << "\nPunkt - konstruktor parametryczny: ";
	point.printInfo();
	cout << "\nKwadrat - konstruktor domyslny: ";
	square1.printInfo();
	cout << "\nKwadrat - konstruktor parametryczny: ";
	square.printInfo();
	cout << "\nKolo - konstruktor domyslny: ";
	circle1.printInfo();
	cout << "\nKolo - konstruktor parametryczny: ";
	circle.printInfo();
	cout << "\nWalec - konstruktor domyslny: ";
	cylinder1.printInfo();
	cout << "\nWalec - konstruktor parametryczny: ";
	cylinder.printInfo();
	cout << "\nProstopadloscian - konstruktor domyslny: ";
	cuboid1.printInfo();
	cout << "\nProstopadloscian - konstruktor parametryczny: ";
	cuboid.printInfo();

	cout << endl;
	return 0;
}