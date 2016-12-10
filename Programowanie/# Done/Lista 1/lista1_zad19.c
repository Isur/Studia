#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	char string[1024];
	int number = 0;
	printf("Podaj liczbe w ciagu znakow: \n");
	fgets(string, 1024, stdin);
	printf("\n%d \n", atoi(string));
	system("PAUSE");
	return 0;
}