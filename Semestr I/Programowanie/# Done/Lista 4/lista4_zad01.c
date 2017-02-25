/*
Napisz program, który tworzy statystykę pliku tekstowego o podanej nazwie. Program wypisuje następujące informacje:
Statystyka pliku: <nazwa_pliku>
Ilosc bajtow: 234
Ilosc liter: 132
Ilosc cyfr: 18
Ilosc linii: 31
Ilosc slow: 49
*/
#include<stdio.h>
main()
{
	int i = 0;
	int bytes = 0, letters = 0, digits = 0;
	double words = 0.0, lines = 0.5;
	char temp[1];
	FILE *file;
	char *filename="zad01.txt";
	file = fopen(filename, "r");
	if(file == NULL) printf("Failed to open...");
	else
	{
		fseek(file, 0, SEEK_END);
		bytes = ftell(file);
		rewind(file);
		for(i = 1; i <= bytes; i++)
		{
			fread(temp, 1, 1, file);
			fseek(file, i, SEEK_SET);
			if(isdigit(*temp)) digits++;
			else if(isalpha(*temp)) letters++;
			else if(isspace(*temp)) 
			{
				if(*temp == '\n') 
				{
					words = words + 0.5;
					lines = lines + 0.5;
				}
				else words++;
			}
		}
		fclose(file);
		words++;
		printf("\n Statystyka pliku: %s", filename);
		printf("\n Ilosc bajtow: %d", bytes);
		printf("\n Ilosc liter: %d", letters);
		printf("\n Ilosc cyfr: %d", digits);
		printf("\n Ilosc linii: %0.lf", lines);
		printf("\n Ilosc slow: %0.lf", words);
	}	
	printf("\n\n");
	system("PAUSE");
	return 0;
}