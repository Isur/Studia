/*
Napisz program szyfrujący/deszyfrujący szyfrem przesunięciowym. Innymi słowy,
program wczytuje kolejne bajty z pliku A. Następnie na każdym z nich wykonuje operację
x 7→ x + klucz (mod 256) .
Tak otrzymane bajty zapisuje do pliku B. Klucz jest liczbą całkowitą podaną przez
użytkownika z linii poleceń. Np. szyfrowanie pliku jeden.txt kluczem 11 wygląda następująco:
program.exe jeden.txt nowy.txt 11
a deszyfrowanie:
program.exe nowy.txt jeden.txt -11
*/

#include<stdio.h>

main(int argc, char *argv[])
{
	int temp;
	int encryption;
	if(argc != 4)
	{
		printf("ERROR!! \n Musza byc podane nazwy 3 argumenty!");
		system("PAUSE");
		return 0;
	}
	FILE *file_start, *file_final;
	encryption = atoi(argv[3]);

	file_start = fopen(argv[1], "rb");
	if(file_start == NULL) printf("ERROR! FAILED TO OPEN FILE");
	else
	{
		file_final = fopen(argv[2], "wb");
		while(1)
		{
			temp = fgetc(file_start);
			if(temp == EOF) break;
			fputc(temp+encryption,file_final);
		}
		fclose(file_start);
		fclose(file_final);
	}
	printf("\n\n");
	system("PAUSE");
	return 0;
}