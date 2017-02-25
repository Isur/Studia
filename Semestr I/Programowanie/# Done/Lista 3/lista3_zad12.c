/*
Napisz program, który po pobraniu z linii poleceń liczby naturalnej n narysuje na
ekranie spiralę o boku n.

*/
#include<stdio.h>
#include<stdlib.h>

int i = 0, j = 0;
char **map;

void printMap(int n)
{
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%c", map[i][j]);
		}
		printf("\n");
	}
}

void fillMap(int n)
{
	int mapStart = 0, mapEnd = n;
	char symbol = '*';

	i = mapStart;
	j = mapStart;
	// RIGHT
	for( j = mapStart; j < mapEnd; j++ )
	{
		map[i][j] = symbol;
	}
	j = mapEnd-1;
	// DOWN
	for(i = mapStart; i < mapEnd; i++)
	{
		map[i][j] = symbol;
	}
	i = mapEnd-1;
	// LEFT
	for(j = mapEnd-1; j >= mapStart; j--)
	{
		map[i][j] = symbol;
	}
	j = mapStart;
	
	mapStart += 2;
	mapEnd -= 2;  
	while(mapEnd > 2)
	{
		// UP
		for(i; i >= mapStart; i--)
		{
			map[i][j] = symbol;
		}
		i = mapStart;
		// RIGHT
		for( j; j < mapEnd; j++ )
		{
			map[i][j] = symbol;
		}
		j = mapEnd-1;
		// DOWN
		for(i = mapStart; i < mapEnd-1; i++)
		{
			map[i][j] = symbol;
		}
		// LEFT
		for(j = mapEnd-1; j >= mapStart+1; j--)
		{
			map[i][j] = symbol;
		}
		mapEnd -= 2;
		mapStart += 2;
	}
}

void createMap(int n)
{
	map = (char **) malloc(n*sizeof(char*));
	for(i = 0; i < n; i++)
	{
		map[i] = (char*) malloc(n*sizeof(char));
	}

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			map[i][j] = ' ';
		}
	}
}

main(int argc, const char *argv[])
{
	int n = 0;
	n = atoi(argv[1]);

	createMap(n);
	fillMap(n);
	printMap(n);
	

	for (i = 0; i < n; i++)
	{
   		free(map[i]);
	}
	free(map);
	printf("\n\n");
	system("PAUSE");
	return 0;
}