#include<stdio.h>
#include<stdlib.h>

main()
{
	int a = 0, b = 0;
	char con = 0, operation = 0;
	printf("Podaj a: \n");
	scanf("%d", &a);
	getchar();
	do
	{
		printf("Wybierz dzialanie[+ lub 1, - lub 2, * lub 3, / lub 4]:\n ");
		scanf("%c", &operation);
		printf("Podaj b: \n");
		scanf("%d", &b);
		getchar();
		
		switch (operation)
		{
		case '1': case '+':
			a += b;
			break;
		case '2': case'-':
			a -= b;
			break;
		case '3': case '*':
			a *= b;
			break;
		case '4': case '/':
			if (b != 0)
				a /=  b;
			else
				printf("\n Mianownik nie moze byc zerem \n");
			break;
		default: 
			break;
		}
		printf("Wynik dzialania to: %d", a);
		printf("\n Czy chcesz liczyæ dalej?[t/n] \n");
		scanf("%c", &con);
		getchar();
		system("CLS");
	} while (con == 'T' || con == 't');

	system("PAUSE");
	return 0;
}