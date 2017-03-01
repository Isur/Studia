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
		cout << "\nPodaj x: "; cin >> this->x;
		cout << "\nPodaj y: "; cin >> this->y;
	}
	Punkt(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	~Punkt()
	{
		cout << "\nZNISZCZONO OBIEKT PUNKT";
	}
	void showInfo()
	{
		cout << "\n PUNKT: ";
		cout << "\n X: " << this->x;
		cout << "\n Y: " << this->y;
	}

};

class Kolo:public Punkt
{
protected:
	int r;
public:
	Kolo()
	{
		cout << "\nPodaj r: "; cin >> this->r;
	}
	Kolo(int x, int y, int r) :r(r), Punkt(x, y) {}
	~Kolo()
	{
		cout << "\nZNISZCZONO OBIEKT KOLO";
	}
	void showInfo()
	{
		cout << "\n KOLO: ";
		cout << "\n X: " << this->x;
		cout << "\n Y: " << this->y;
		cout << "\n R: " << this->r;
	}
};

class Walec:public Kolo
{
protected:
	int h;
public:
	Walec()
	{
		cout << "\nPodaj h: "; cin >> this->h;
	}
	Walec(int x, int y, int r, int h) :h(h), Kolo(x, y, r) {}
	~Walec()
	{
		cout << "\nZNISZCZONO OBIEKT WALEC";
	}
	void showInfo()
	{
		cout << "\n WALEC: ";
		cout << "\n X: " << this->x;
		cout << "\n Y: " << this->y;
		cout << "\n R: " << this->r;
		cout << "\n H: " << this->h;
	}
};

class Kwadrat:public Punkt
{
protected:
	int a;
public:
	Kwadrat()
	{
		cout << "\nPodaj a: "; cin >> this->a;
	}
	Kwadrat(int x, int y, int a) :a(a), Punkt(x, y) {}
	~Kwadrat()
	{
		cout << "\nZNISZCZONO OBIEKT KWADRAT";
	}
	void showInfo()
	{
		cout << "\n KWADRAT: ";
		cout << "\n X: " << this->x;
		cout << "\n Y: " << this->y;
		cout << "\n A: " << this->a;
	}

};

class Prostopadloscian:public Kwadrat
{
protected:
	int h;
public:
	Prostopadloscian()
	{
		cout << "\nPodaj h: "; cin >> this->h;
	}
	Prostopadloscian(int x, int y, int a, int h):h(h),Kwadrat(x,y,a){}
	~Prostopadloscian()
	{
		cout << "\nZNISZCZONO OBIEKT PROSTOPADLOSCIAN";
	}
	void showInfo()
	{
		cout << "\n PROSTOPADLOSCIAN: ";
		cout << "\n X: " << this->x;
		cout << "\n Y: " << this->y;
		cout << "\n A: " << this->a;
		cout << "\n H: " << this->h;
	}
};

int main()
{
	cout << "KONSTRUKTORY PARAMETRYCZNE:\n";
	Punkt *p = new Punkt(4, 3);
	Kolo *k = new Kolo(3, 7, 15);
	Walec *w = new Walec(5, 4, 7, 7);
	Kwadrat *kw = new Kwadrat(4, 5, 3);
	Prostopadloscian *ps = new Prostopadloscian(7, 7, 7, 7);
	p->showInfo();
	k->showInfo();
	w->showInfo();
	kw->showInfo();
	ps->showInfo();
	cout << "\nKonstruktor domyslny PUNKT:";
	Punkt *p1 = new Punkt();
	cout << "\nKonstruktor domyslny KOLO:";
	Kolo *k1 = new Kolo();
	cout << "\nKonstruktor domyslny WALEC:";
	Walec *w1 = new Walec();
	cout << "\nKonstruktor domyslny KWADRAT:";
	Kwadrat *kw1 = new Kwadrat();
	cout << "\nKonstruktor domyslny PROSTOPADLOSCIAN:";
	Prostopadloscian *ps1 = new Prostopadloscian();
	p1->showInfo();
	k1->showInfo();
	w1->showInfo();
	kw1->showInfo();
	ps1->showInfo();

	cout << endl;
	return 0;
}