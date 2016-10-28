#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	double a = 0, b = 0, c = 0, delta = 0, x1 = 0, x2 = 0, x0 = 0;
	printf("Podaj a: \n");
	scanf("%lf", &a);
	printf("Podaj b: \n");
	scanf("%lf", &b);
	printf("Podaj c: \n");
	scanf("%lf", &c);

	printf("\n %.2lf x^2 + %.2lf x + %.2lf = 0 \n", a, b, c);

	delta = (b*b) - (4 * a*c);
	if (delta == 0)
	{
		x0 = (-b) / (2 * a);
		printf("Równanie ma jeden pierwiastek: %.2lf \n", x0);
	}
	else if (delta > 0)
	{
		x1 = (-b - sqrt(delta)) / (2 * a);
		x2 = (-b + sqrt(delta)) / (2 * a);

		printf("Równanie ma dwa pierwastki: %.2lf oraz %.2lf \n", x1, x2);
	}
	else
	{
		printf("Równanie nie ma pierwiastków");
	}

	system("PAUSE");
	return 0;
}