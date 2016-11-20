/*
Podany kod przepisz zamieniając pętlę for na pętlę typu while tak, aby uzyskać
równoważny w działaniu kod.
int i = 0, n = 0;
scanf( "%d", &n );
for( i=0; i<n; i++ )
{
if( i%3 ) continue;
printf( "%d\n", i );
}
*/
#include<stdio.h>
main()
{
	int i = 0, n = 0;
	scanf("%d", &n);
	while(i < n)
	{
		if(i%3)
		{
			i++;
		}
		else
		{
			printf("%d\n",i);
			i++;
		}
		
	};

	system("PAUSE");
	return 0;
}
