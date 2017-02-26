/*
Utwórz w konsoli choinkê wykorzystuj¹c w tym celu symbol "*".
Choinka ma wygl¹daæ jak poni¿ej.


				*
			   ***
			  *****
			 *******
			  *****
			 *******
			*********
		   ***********
		  *************
		 ***************
	        *********
		   ***********
		  *************
		 ***************
		*****************
	   *******************
				*
				*
				*
				*
*/

#include<iostream>
using namespace std;

class Tree
{
	char symbol = '*';
	int height;
	int levels;
	
	void printTree()
	{
		int i, j, k, counter = 1; 
		int space = 2*height*levels;
		for (k = 0; k < levels; k++)
		{
			for (i = 0; i < height+k; i++)
			{
				for (j = 0; j < space; j++) cout << " ";
				for (j = 0; j < counter; j++) cout << symbol;
				cout << endl;
				counter += 2;
				space--;
			}
			counter -= 4;
			space += 2;
		}
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < (counter)/2 + space; j++)
			{
				cout << " ";
			}
			cout << symbol << endl;
		}
	}
public:
	Tree()
	{
		cout << "\n Podaj ilosc poziomow choinki: ";
		cin >> levels;
		cout << "\n Podaj wysokosc szczytu choinki: ";
		cin >> height;
		printTree();
	}
};

int main()
{
	Tree littleTree;
	cout << endl;
	return 0;
}