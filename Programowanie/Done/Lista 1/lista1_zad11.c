#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	char sentence[1024];
	int i = 0, pair = 0;

	printf("Napisz jakies zdanie: \n");
	fgets(sentence, 1024, stdin);
	for (i = 0; i < strlen(sentence); i++)
	{
		if ((sentence[i] == 'O' || sentence[i] == 'o') && (sentence[i + 1] == 'O' || sentence[i + 1] == 'o'))
			pair++;
	}
	printf("\n Ilosc par: %d \n", pair);

	system("PAUSE");
	return 0;
}
