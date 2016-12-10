#include<stdio.h>

void zadanie_01()
{
	int i = 0;
	printf("Zadanie 01 ...");

	printf("\nAle wnerwiajacy dzwiek!");

	for(i = 0; i < 4; i++)
	{
		printf("%c",7);
	}

	system("PAUSE");
}
void zadanie_02()
{
	int wiek = 0;
	printf("Zadanie 02 ...");
	printf("\nIle masz lat?");
	scanf("%d", &wiek);
	printf("\nMasz %d lat", wiek);
	
	system("PAUSE");
}
void zadanie_03()
{
	int wiek = 0;
	printf("Zadanie 03 ...");
	printf("\nIle masz lat?");
	scanf("%d", &wiek);
	printf("\n Za 480 miesiecy bedziesz mial: %d lat", wiek + (480/12));
	
	system("PAUSE");
}
void zadanie_04()
{
	int a = 0, b = 0;
	printf("Zadanie 04 ...");
	printf("\n Podaj liczbe a: ");
	scanf("%d", &a);
	getchar();
	printf("\n Podaj liczbe b: ");
	scanf("%d", &b);
	printf("Liczba %d jest wieksza od liczby %d", (a>b)?a:b, (a<b)?a:b);

	system("PAUSE");
}
void zadanie_05()
{
	int a = 0, b = 0, wynik = 0;
	printf("Zadanie 05 ...");
	printf("\n Podaj liczbe a: ");
	scanf("%d", &a);
	getchar();
	printf("\n Podaj liczbe b: ");
	scanf("%d", &b);
	wynik = a*b;
	if(wynik == 100)
	{
		printf("Liczba %d jest rowna 100", wynik);
	}
	else
	{
		printf("Liczba %d jest %s niz 100", wynik, (wynik>100)?"wieksza":"mniejsza");
	}
	
	system("PAUSE");
}
void zadanie_06()
{
	int i = 0;
	printf("Zadanie 06 ...");
	for(i = 0; i < 10; i++)
	{
		printf("kocham lato\n");
	}
	system("PAUSE");
}
void zadanie_07()
{
	float uczen[13];
	int i = 0;
	float srednia = 0.0;
	printf("Zadanie 07 ...");
	for(i = 0; i < sizeof(uczen)/sizeof(float);i++)
	{
		printf("\nPodaj ocene ucznia nr %d: ", i+1);
		scanf("%f", &uczen[i]);
		if(uczen[i] > 6.0 || uczen[i] < 1.0)
		{
			printf("BLAD! PODAJ JESZCZE RAZ");
			i--;
		}
		getchar();
	}
	for(i = 0; i < sizeof(uczen)/sizeof(float); i++)
	{
		srednia += uczen[i];
	}
	srednia = srednia/(sizeof(uczen)/sizeof(float));
	printf("\nSrednia klasy wynosi: %.2f", srednia);
	system("PAUSE");
}
void zadanie_08()
{
	unsigned int liczba = 0, suma = 0;
	printf("Zadanie 08 ...");
	printf("\n Podawaj liczby: ");
	while(liczba != 1)
	{
		scanf("%d", &liczba);
		suma += liczba;
	}
	printf("Suma wynosi: %d", suma);
	system("PAUSE");
}
void zadanie_09()
{
	int i = 25;
	printf("Zadanie 09 ...");
	while(i <= 100)
	{
		printf("\n %d", i);
		i++;
	}
	system("PAUSE");
}
void zadanie_10()
{
	int x = 0;
	printf("Zadanie 10 ...");
	printf("Podaj wartosc od 1 do 3");
	scanf("%d", &x);
	switch(x)
	{
		case 1:
			printf("\nPierwszy blok instrukji");
			break;
		case 2:
			printf("\nDrugi blok instrukji");
			break;
		case 3:
			printf("\nTrzeci blok instrukji");
			break;
			default: 
			printf("\nJEDEN DO TRZY MIALO BYC");
			break;
	}
	system("PAUSE");
}

main()
{
	int selectMenu = 0;
	do
	{
		system("CLS");
		printf("Wybierz zadanie 1 - 10 [44 - exit]: ");		
		scanf("%d", &selectMenu);
		getchar();
		switch(selectMenu)
		{
			case 1:
				zadanie_01();
				break;
			case 2:
				zadanie_02();
				break;
			case 3:
				zadanie_03();
				break;
			case 4:
				zadanie_04();
				break;
			case 5:
				zadanie_05();
				break;
			case 6:
				zadanie_06();
				break;
			case 7:
				zadanie_07();
				break;
			case 8:
				zadanie_08();
				break;
			case 9:
				zadanie_09();
				break;
			case 10:
				zadanie_10();
				break;
			case 44:
				break;
		}
	}while(selectMenu != 44);


	return 0;
}