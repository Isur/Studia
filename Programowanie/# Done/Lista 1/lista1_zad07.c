#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	char word[1024];
	int l = 0, i = 0;
	printf("Podaj slowo: \n");
	fgets(word, 1024, stdin);
	for ( i = strlen(word); i >= 0; i--)
	{
		if (word[i] != "\0")
			printf("%c", word[i]);
	}
	printf("\n");
	system("PAUSE");
	return 0;
}