#include<stdio.h>
#include<stdlib.h>

main()
{
	char imie[1024];
	int x = 0, y = 0, i = 0;
	printf("Podaj imie: ");
	scanf("%s", imie);
	printf("Twoje imie to: %s \n", imie); 
	for (i = 0; i < sizeof(imie); i++)
	{
		if (imie[i] == 'a' || imie[i] == 'A')
		{
			x++;
		}
	}
	printf("W Twoim imieniu znajduje sie %d znakow 'A' oraz 'a'. \n", x);
	return 0;
}