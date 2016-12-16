/*
Napisz program, który kopiuje plik A na plik B zamieniając polskie litery na ich
angielskie odpowiedniki (bez ogonków i kropek).
*/

#include<stdio.h>
main()
{
	
	FILE *file_in, *file_out;
	int temp;

	file_in = fopen("zad02_a.txt", "rb");
	if(file_in == NULL) printf("Failed to open...");
	else
	{
		file_out = fopen("zad02_b.txt", "wb");
		while(1)
		{
			temp = fgetc(file_in);
			if(temp == EOF) break;
			if(temp == 185) temp = 'a';
			else if(temp == 230) temp = 'c';
			else if(temp == 234) temp = 'e';
			else if(temp == 179) temp = 'l';
			else if(temp == 241) temp = 'n';
			else if(temp == 243) temp = 'o';
			else if(temp == 156) temp = 's';
			else if(temp == 159) temp = 'z';
			else if(temp == 191) temp = 'z';
			fputc(temp, file_out);
		}
		fclose(file_in);
		fclose(file_out);
	}
	printf("\n\n");
	system("PAUSE");
	return 0;
}