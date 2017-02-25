#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	int i = 0, number = 0, temp = 0;
	char result[1024];
	printf("Podaj liczbe: \n");
	scanf("%d", &number);
	temp = number;
	do 
	{
		if (temp % 2 == 0)
		{
			result[i] = '0';
			temp /= 2;
			i++;
		}
		else
		{
			result[i] = '1';
			temp /= 2;
			i++;
		}
	} while (temp >= 1);
	
	
	printf("Liczba dziesietna %d jako binarna to: ", number);
	for (temp = i-1; temp >= 0; temp--)
	{
		printf("%c", result[temp]);
	}
	printf("\n");
	system("PAUSE");
	return 0;
}