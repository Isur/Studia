#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
main()
{
	int j = 0, i = 0;
	char sentence[1024];
	printf("Wpisz zdanie: \n");
	fgets(sentence, 1024, stdin);
	for (i = 0; i < strlen(sentence); i++)
		sentence[i] = toupper(sentence[i]);
	for (i = 0; i < strlen(sentence); i++)
	{
		if (sentence[i] == 32)
		{
			for (j = i; j < (strlen(sentence)-1); j++)
			{
				sentence[j] = sentence[j + 1];
			}
		}
	}
	printf("%s",sentence);

	system("PAUSE");
	return 0;
}