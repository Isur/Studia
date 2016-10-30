#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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

void sort(char *array, int size)
{
	int i = 0, j = 0, temp = 0;
	for (j = size - 1; j >= 0; j--)
	{
		for (i = size - 1; i >= 0; i--)
		{
			if (array[i] < array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}

int anagramy(char *word, int wordSize, char *anagram, int anagramSize)
{
	int sizeWord = 0, sizeAnagram = 0, result = 0;
	int i = 0, j = 0, temp = 0;
	char charsWord[1024], charsAnagram[1024];

	sizeWord = sizeOfArrayContent(word, wordSize);
	sizeAnagram = sizeOfArrayContent(anagram, anagramSize);	
	for (i = 0; i < sizeWord; i++)
	{
		charsWord[i] = word[i];
	}
	charsWord[i] = '\0';
	for (i = 0; i < sizeAnagram; i++)
	{
		charsAnagram[i] = anagram[i];
	}
	charsAnagram[i] = '\0';

	sort(charsWord, sizeWord);
	sort(charsAnagram, sizeAnagram);

	return (strcmp(charsWord, charsAnagram))?0:1;
}

main()
{
	char word[1024], anagram[1024];
	printf("Podaj slowo: ");
	fgets(word, 1024, stdin);
	printf("Podaj slowo, ktore nalezy sprawdzic, czy jest anagramem: ");
	fgets(anagram, 1024, stdin);

	printf("\n%d\n", anagramy(word, sizeof(word), anagram, sizeof(anagram)));

	system("PAUSE");
	return 0;
}