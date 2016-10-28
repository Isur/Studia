#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	char sentence[1024];
	int i = 0, words = 0;

	printf("Napisz jakies zdanie: \n");
	fgets(sentence, 1024, stdin);
	for (i = 0; i < strlen(sentence); i++)
	{
		if (sentence[i] == 32 || sentence[i] == '\n' )
		{
			if (sentence[i - 1] != 0 && sentence[i - 1] != '\n' && sentence[i - 1] != 32 && i > 0)
			{
				words++;
			}
		}
	}
	printf("\n Ilosc slow: %d \n", words);

	system("PAUSE");
	return 0;
}
