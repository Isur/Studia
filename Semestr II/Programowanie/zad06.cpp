/*
Utw�rz nast�puj�ce klasy: Kolo, Kwadrat, Walec, Szescian.
Zbuduj w odpowiedni spos�b hierarchi� klas.
Dodaj klas� abstrakcyjn�.
Utw�rz obiekty w ramach ka�dej z klas.
Wykorzystuj�c wska�nik wywo�aj w ramach ka�dej z klas metod� obliczaj�c� pole powierzchni wszystkich utworzonych obiekt�w.
Zwr�� uwag� na elementy charakterystyczne dla polimorfizmu.
*/
#include<iostream>
using namespace std;

class Figura
{
public:
	virtual double pole()
	{
		cout << "Obliczanie pola";
		return 1;
	}
};

class Kolo:public Figura
{
protected:
	int r;

public:
	Kolo()
	{
		cout << "\nPodaj promien: ";
		cin >> this->r;
	}
	double pole()
	{
		return this->r*this->r*3.14;
	}
};

class Kwadrat: public Figura
{
protected:
	int x;

public:
	Kwadrat()
	{
		cout << "\nPodaj dlugosc boku: ";
		cin >> this->x;
	}
	double pole()
	{
		return this->x*this->x;
	}

};

class Walec:protected Kolo
{
protected:
	int h;

public:
	Walec()
	{
		this->r = r;
		cout << "\nPodaj wysokosc: ";
		cin >> this->h;
	}
	double pole()
	{
		return this->r*this->r*3.14 * 2 + 2 * 3.14*this->r*this->h;
	}
};

class Szescian:protected Kwadrat
{

public:
	Szescian()
	{
		this->x = x;
	}
	double pole()
	{
		return this->x*this->x*this->x;
	}
};

int main()
{
	cout << "\n Kwadrat:";
	Kwadrat *square = new Kwadrat();
	cout << "\n Kolo: ";
	Kolo *circle = new Kolo();
	cout << "\n Walec: ";
	Walec *cylinder = new Walec();
	cout << "\n Szescian: ";
	Szescian *cube = new Szescian();
	cout << "\n Pole kwadratu wynosi: " << square->pole();
	cout << "\n Pole szescianu wynosi: " << cube->pole();
	cout << "\n Pole kola wynosi : " << circle->pole();
	cout << "\n Pole walca wynosi: " << cylinder->pole();



	cout << endl;
	return 0;
}