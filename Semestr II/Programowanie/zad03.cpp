/*
Utw�rz klas� bazow�, klas� do niej pochodn� oraz klas� pochodn� do klasy pochodnej.
Napisz program, dzi�ki kt�remu sprawdzisz dost�p do element�w klasy bazowej 
oraz element�w klas pochodnych dla metod i obiekt�w nale��cych do klasy bazowej i klas pochodnych. 
Dziedziczeniu przypisz atrybuty private, protected oraz public. 
W ramach ka�dej klasy utw�rz atrybuty private, protected oraz public.
Wyniki test�w zapisz w utworzonej przez siebie tabeli.
*/

#include<iostream>
#include<string>
using namespace std;

class FirstClass
{
private:
	string firstPriv = "\nPrywatny Bazowej";
	void checkMetodPrivate()
	{
		cout << secondPriv;
		cout << secondProt;
		cout << secondPub;
		cout << thirdPriv;
		cout << thirdProt;
		cout << thirdPub;
	}
protected:
	string firstProt = "\nChroniony Bazowej";
	void checkMetodProtected()
	{
		cout << secondPriv;
		cout << secondProt;
		cout << secondPub;
		cout << thirdPriv;
		cout << thirdProt;
		cout << thirdPub;
	}
public:
	string firstPub = "\nPubliczny Bazowej";
	void checkMetodPublic()
	{
		cout << secondPriv;
		cout << secondProt;
		cout << secondPub;
		cout << thirdPriv;
		cout << thirdProt;
		cout << thirdPub;
	}
};

class SecondClass :private FirstClass
{
private:
	string secondPriv = "\nPrywatny pierwszej pochodnej";
	void checkMetodPrivate()
	{
		cout << firstPriv;
		cout << firstProt;
		cout << firstPub;
		cout << thirdPriv;
		cout << thirdProt;
		cout << thirdPub;
	}
protected:
	string secondProt = "\nChroniony pierwszej pochodnej";
	void checkMetodProtected()
	{
		cout << firstPriv;
		cout << firstProt;
		cout << firstPub;
		cout << thirdPriv;
		cout << thirdProt;
		cout << thirdPub;
	}
public:
	string secondPub = "\nPubliczny pierwszej pochodnej";
	void checkMetodPublic()
	{
		cout << firstPriv;
		cout << firstProt;
		cout << firstPub;
		cout << thirdPriv;
		cout << thirdProt;
		cout << thirdPub;
	}
};

class ThirdClass :private SecondClass
{
private:
	string thirdPriv = "\nPrywatny drugiej pochodnej";
	void checkMetodPrivate()
	{
		cout << secondPriv;
		cout << secondProt;
		cout << secondPub;
		cout << firstPriv;
		cout << firstProt;
		cout << firstPub;
	}
protected:
	string thirdProt = "\nChroniowy drugiej pochodnej";
	void checkMetodProtected()
	{
		cout << secondPriv;
		cout << secondProt;
		cout << secondPub;
		cout << firstPriv;
		cout << firstProt;
		cout << firstPub;
	}
public:
	string thirdPub = "\nPubliczny drugiej pochodnej";
	void checkMetodPublic()
	{
		cout << secondPriv;
		cout << secondProt;
		cout << secondPub;
		cout << firstPriv;
		cout << firstProt;
		cout << firstPub;
	}
};

int main()
{
	FirstClass a1;
	SecondClass a2;
	ThirdClass a3;

	//a1.firstClassMetod();
	//a2.printFirstClassStrings();
	//a3.printFirstClassStrings();
	return 0;
}