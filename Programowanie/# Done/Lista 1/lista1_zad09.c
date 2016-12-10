#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
main()
{
	char sentence[1024], palindrom[1024];
	int i = 0, j = 0;
	printf("Napisz jakies zdanie: \n");
	fgets(sentence, 1024, stdin);
	for (i = 0; i < strlen(sentence); i++)
	{
		if (sentence[i] == 32)
		{
			for (j = i; j < strlen(sentence)-1; j++)
			{
				sentence[j] = sentence[j + 1];
			}
			
		}
		else if (sentence[i] == '\n')
		{
			sentence[i] ='\0';
			break;
		}
		sentence[i] = toupper(sentence[i]);
	}
	for (j = 0; j <= i; j++)
	{
		palindrom[j] = sentence[strlen(sentence)-j-1];
	}	
	palindrom[j-1] = '\0';
	if (strcmp(palindrom, sentence) == 0)
	{
		printf("Palindron \n");
	}
	else
	{
		printf("Nie palindron \n");
	}

	printf("Oryginal: %s \n", sentence);
	printf("Palindrom: %s \n", palindrom);
	system("PAUSE");
	return 0;
}
