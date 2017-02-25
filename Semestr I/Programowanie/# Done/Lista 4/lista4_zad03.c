/*
Napisz program, który kopiuje plik A na plik B (zakładamy, że A to plik tekstowy)
jednocześnie zamieniając znaki CR-LF (kody: 13 10 - postać nowych wierszy dla
Windowsa) na znaki nowego wiersza w formacie uniksowym (tylko LF - kod 10).
*/
#include<stdio.h>

main()
{
	FILE *file_in, *file_out;
	int temp;
	file_in = fopen("zad03_a.txt", "rb");
	if(file_in == NULL) printf("ERROR FAIL TO LOAD FILE");
	else
	{
		file_out = fopen("zad03_b.txt", "wb");
		while(1)
		{
			temp = fgetc(file_in);
			if(temp == EOF) break;
			if(temp == 13) 
			{
				temp = 10;
			}
			fputc(temp, file_out);
		}
		fclose(file_in);
		fclose(file_out);
	}

	printf("\n\n");
	system("PAUSE");
	return 0;
}