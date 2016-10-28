#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, x, y;
	printf("Podaj a: \n");
	scanf("%lf", &a);
	printf("Podaj b: \n");
	scanf("%lf", &b);
	printf("Podaj c: \n");
	scanf("%lf", &c);
	printf("Podaj d: \n");
	scanf("%lf", &d);
	printf("Podaj e: \n");
	scanf("%lf", &e);
	printf("Podaj f: \n");
	scanf("%lf", &f);

	x = (c*e - b*f) / (a*e - b*d);
	y = (a*f - c*d) / (a*e - b*d);

	if ((a*e - b*d) != 0)
	{
		printf("Rozwianie jest jedno: \n x = %.2lf \n y = %.2lf \n", x, y);
	}
	else if ((c*e - b*f) == 0 && (a*f - c*d) == 0 && (a*e - b*d) == 0)
	{
		printf("Uk³ad posiada nieskoñczenie wiele rozwi¹zañ \n");
	}
	else
	{
		printf("Brak rozwi¹zañ!\n");
	}
	
	system("PAUSE");
	return 0;
}