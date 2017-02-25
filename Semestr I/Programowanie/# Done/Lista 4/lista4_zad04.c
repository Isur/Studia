/*
Napisz program, który łączy dwa pliki w jeden. Nazwy plików podane są z linii
poleceń, tzn. wpisując
program.exe jeden.txt dwa.txt nowy.txt
Powstanie plik nowy.txt będący sumą plików jeden.txt i dwa.txt.
*/

#include<stdio.h>

main(int argc, char *argv[])
{
	if(argc != 4)
	{
		printf("ERROR! NOT ENOUGH ARGUMENTS OR TOO MUCH! \n Musza byc podane nazwy 3 plikow!");
		system("PAUSE");
		return 0;
	}
	FILE *file_one, *file_two, *file_final;
	int temp;
	file_one = fopen(argv[1], "rb");
	file_two = fopen(argv[2], "rb");
	if(file_one == NULL) printf("ERROR FAILED TO OPEN FIRST FILE!");
	else
	{
		file_final = fopen(argv[3], "wb");
		while(1)
		{
			temp = fgetc(file_one);
			if(temp == EOF) break;
			fputc(temp, file_final);
		}
		fclose(file_one);
		fclose(file_final);
	}
	if(file_two == NULL) printf("ERROR FAILED TO OPEN SECOND FILE!");
	else
	{
		file_final = fopen(argv[3], "ab");
		while(1)
		{
			temp = fgetc(file_two);
			if(temp == EOF) break;
			fputc(temp, file_final);
		}
		fclose(file_one);
		fclose(file_final);
	}

	printf("\n\n");
	system("PAUSE");
	return 0;
}