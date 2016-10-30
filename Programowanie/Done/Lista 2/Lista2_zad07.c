#include<stdio.h>
#include<stdlib.h>

int sizeOfArrayContent(char *arrayContent, int arraySize)
{
	int i = 0, size = 0;
	for (i = 0; i < arraySize; i++)
	{
		if (arrayContent[i] == '\n')
			break;
		size++;

	}
	return size;
}

void litery(char *s, int sSize, char *t, int tSize)
{
	int i = 0, j = 0; 
	int size = 0, chars = 0, change = 0;
	size = sizeOfArrayContent(t, tSize);
	for (i = 0; i < size; i++)
	{
		if (i == 0)
			s[i] = t[i];
		else
		{
			for (j = 0; j <= i; j++)
			{
				if (s[j] == t[i])
				{		
					change++;
					break;
				}
			}
			if (j-1 == i)
			{
				s[i-change] = t[i];
				chars++;
			}
		}
	}
	for (i = 0; i <= chars; i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");

	
}

main()
{
	char s[1024], t[1024];
	printf("Podaj lancuch znakow: ");
	fgets(t, 1024, stdin);
	litery(s,sizeof(s), t, sizeof(t));

	system("PAUSE");
	return 0;
}