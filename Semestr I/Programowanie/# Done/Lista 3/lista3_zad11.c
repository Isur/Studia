/*
Napisz program, który będzie działał jak kalkulator z linii poleceń. Oznaczenia
działań: +,-,x,/. Jeśli w linii poleceń wpiszemy:
program.exe 123 x 63
otrzymamy wynik:
Wynik: 7749.
*/
#include<stdio.h>

main(int argc, const char *argv[])
{
	double a = 0;
	double b = 0;
	char action;

	a = atol(argv[1]);
	b = atol(argv[3]);
	action = argv[2][0];

	switch(action)
	{
		case '+':
			printf("%.2lf + %.2lf = %.2lf", a, b, a+b);
			break;
		case '-':
			printf("%.2lf - %.2lf = %.2lf", a, b, a-b);
			break;
		case 'x':
			printf("%.2lf x %.2lf = %.2lf", a, b, a*b);
			break;
		case '/':
			if(action == '/' && b == 0)
			{
				printf("ERROR, nie dziel przez 0");
				break;
			}
			else
			{
				printf("%.2lf / %.2lf = %.2lf", a, b, a/b);
				break;
			}
			default:
			printf("zly znak");
	}


	
	printf("\n\n");
	system("PAUSE");
	return 0;
}