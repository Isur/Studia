#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	char chars[1024];
	int count[1024][2] = {0,0};
	int i = 0, j = 0, quantity = 0;
	printf("Wpisz ciag znakow: ");
	fgets(chars, 1024, stdin);

	for (i = 0; i < strlen(chars); i++)
	{
		if (i == 0)
		{
			count[i][0] = chars[i];
			count[i][1] = 1;
		}
		else
		{
			for (j = 0; j < i; j++)
			{
				if (count[j][0] == chars[i])
				{
					count[j][1] = count[j][1] + 1;
					break;
				}
			}
			if (j == i)
			{
				count[i][0] = chars[i];
				count[i][1] = 1;
				quantity++;
			}
		}
	}
	for (i = 0; i<quantity; i++)
	{
		printf("%c - %d\n", count[i][0], count[i][1]);
	}
	system("PAUSE");
	return 0;
}