#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	char sentence[1024];
	int i = 0, j = 0;

	printf("Podaj zdanie z 'kotek': \n");
	fgets(sentence, 1024, stdin);
	for (i = 0; i <= strlen(sentence); i++)
	{
		if ((sentence[i] == 'k' || sentence[i] == 'K') && sentence[i + 1] == 'o' && sentence[i + 2] == 't' && sentence[i + 3] == 'e' && sentence[i + 4] == 'k')
		{
			for (j = strlen(sentence); j >= i + 6; j--)
			{
				sentence[j] = sentence[j - 1];
			}
			if (sentence[i] == 'K')
				sentence[i] = 'P';
			else
				sentence[i] = 'p';
			sentence[i + 1] = 'i';
			sentence[i + 2] = 'e';
			sentence[i + 3] = 's';
			sentence[i + 4] = 'e';
			sentence[i + 5] = 'k';
		}
		if (sentence[i] == '\n')
			break;
	}
	
	sentence[i + 1] = 0;
	printf("%s \n", sentence);

	system("PAUSE");
	return 0;
}