/*
Utwórz klasê bazow¹, klasê do niej pochodn¹ oraz klasê pochodn¹ do klasy pochodnej.
Napisz program, dziêki któremu sprawdzisz dostêp do elementów klasy bazowej 
oraz elementów klas pochodnych dla metod i obiektów nale¿¹cych do klasy bazowej i klas pochodnych. 
Dziedziczeniu przypisz atrybuty private, protected oraz public. 
W ramach ka¿dej klasy utwórz atrybuty private, protected oraz public.
Wyniki testów zapisz w utworzonej przez siebie tabeli.
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