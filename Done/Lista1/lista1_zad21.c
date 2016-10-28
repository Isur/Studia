#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	int a = 0, b = 0, c = 0, i = 0;
	char alphabet[] = { 'a', 'b', 'c' };
	for (i = 0; i < 81; i++)
	{
		if (i == 0) 
		{
			printf("%c%c%c%c \n", alphabet[i / 27], alphabet[a], alphabet[b], alphabet[c]);
			continue;
		}
		c++;
		if(i >= 3 && i %3 == 0)
		{
			c = 0;
			b++;
		}
		if(i >= 9 && i %9 == 0)
		{
			c = 0;
			b = 0;
			a++;
		}
		if (i >= 27 && i % 27 == 0)
		{
			a = 0;
			b = 0;
			c = 0;
		}
		printf("%c%c%c%c \n", alphabet[i/27], alphabet[a], alphabet[b], alphabet[c]);
	}
	
	system("PAUSE");
	return 0;
}
