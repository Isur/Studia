/*
Napisz program, który wypisuje wszystkie argumenty jakie otrzymał z linii poleceń.
*/
#include<stdio.h>

main(int argc, char *argv[])
{
	int i = 0;
	while(i < argc)
	{
		printf("\nArgument %d -  %s",i+1, argv[i]);
		i++;
	}
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}