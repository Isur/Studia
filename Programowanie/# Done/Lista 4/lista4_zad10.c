/*
Napisz program, który usuwa wszystkie komentarze z dowolnego pliku źródłowego
w języku C (zgodnie ze standardem C99)
*/
#include<stdio.h>
#include<ctype.h>

main()
{
	int temp;
	int bool_ignore = 0;					// jesli 1 lub 2 to ignorowac kod
	FILE *file, *file_temp;
	file = fopen("zad10_komentarze.c", "rb");
	if(file == NULL) printf("ERROR! FAILED TO LOAD FILE!");
	else
	{
		file_temp = fopen("temp.tmp", "wb");
		while(1)
		{
			temp = fgetc(file);
			if(temp == EOF) break;
			// sprawdzanie komentarza
			if(temp == '/')
			{
				temp = fgetc(file);
				if(temp == '/')
				{
					bool_ignore = 1;
				}
				else if(temp == '*')
				{
					bool_ignore = 2;
				}
			}
			if(bool_ignore == 1)
			{
				if(temp == '\n') bool_ignore = 0;
			}
			else if(bool_ignore == 2)
			{
				if(temp == '*')
				{
					temp = fgetc(file);
					if(temp == '/') 
					{
						bool_ignore = 0;
						temp = fgetc(file);
					}
				}
			}
			if(bool_ignore == 1 || bool_ignore == 2) continue;
			fputc(temp, file_temp);
		}
		fclose(file_temp);
		fclose(file);
	}
	file_temp = fopen("temp.tmp", "rb");
	if(file == NULL)printf("ERROR! FAILED TO LOAD FILE!");
	else
	{
		file = fopen("zad10_komentarze.c", "wb");
		while(1)
		{
			temp = fgetc(file_temp);
			if(temp == EOF) break;
			fputc(temp, file);
		}
		fclose(file_temp);
		fclose(file);
		remove("temp.tmp");
	}

	printf("\n\n");
	system("PAUSE");
	return 0;
}