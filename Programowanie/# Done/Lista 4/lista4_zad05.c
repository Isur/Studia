/*
Napisz program, który zapisuje zawartość pliku tekstowego A w pliku B w odwrotnej
kolejności.
*/

#include<stdio.h>

main()
{
	FILE *file_in, *file_out;
	int temp;
	int n = (-1);
	int file_size;
	int i = 0;

	file_in = fopen("zad05_a.txt", "rb");
	if(file_in == NULL) printf("ERROR! FAILED TO OPEN FILE!");
	else
	{
		fseek(file_in, 0, SEEK_END);
		file_size = ftell(file_in);
		file_out = fopen("zad05_b.txt", "wb");
		for(i = 0; i < file_size; i++)
		{
			fseek(file_in, n, SEEK_END);
			temp = fgetc(file_in);
			fputc(temp, file_out);
			n--;
		}
		fclose(file_in);
		fclose(file_out);
	}

	printf("\n\n");
	system("PAUSE");
	return 0;
}