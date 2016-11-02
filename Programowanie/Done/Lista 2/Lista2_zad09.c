#include<stdio.h>
#include<stdlib.h>

void swap(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void permutation(char *arrayContent, int startPosition, int arraySize)
{
	int i, j = 0;

	if (startPosition == arraySize)
	{
		for (j = 0; j <= arraySize; j++)
		{
			printf("%c", arrayContent[j]);
		}
		printf("\n");
	}
	else
	{
		for (i = startPosition; i <= arraySize; i++)
		{
			swap((arrayContent + startPosition), (arrayContent + i));
			permutation(arrayContent, startPosition+1, arraySize);
			swap((arrayContent + startPosition), (arrayContent + i));
		}
	}
}

main()
{
	char alphabet[] = "12345678";
	int alphabetLength = 0;
	do
	{
		system("CLS");
		printf("\nPodaj dlugosc ciagow znakow[ od 1 do 8]: ");
		scanf("%d", &alphabetLength);
	}while (alphabetLength > 8 || alphabetLength < 1);
	permutation(alphabet, 0, alphabetLength-1);

	system("PAUSE");
	return 0;
}