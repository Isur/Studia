/* DLA PRZYKLADU SKOMENTOWANY PLIK Z POPRZEDNIEGO ZADANIA! 
Zastępowanie. Napisz program, który w określonym przez 
użytkownika pliku zastę-puje podany ciąg znaków innym ciągiem znaków.*/
#include<stdio.h>
#include<ctype.h>

main()
{
	int i = 0;									// pomocnicza
	int temp, temp2;							// przechowuja znaki z pliku
	int bool_check = 0;							// czy ciagi znakow sa zgodne
	char file_name[256];						// nazwa pliku
	char *sentence = "kotek";					// ciag ktory mamy zamienic		po zmianie na ciagi wczytane przez uzytkownika	
	char *toReplace = "piesek";					// ciga ktory mamy wstawic		program rowniez powinien sobie poradzic :)
	printf("Podaj nazwe pliku: ");				
	fgets(file_name, 256, stdin);
	file_name[strlen(file_name)-1] = '\0';		// pozbycie sie znaku nowej linii

	FILE *file, *file_temp;
	file = fopen(file_name, "rb");
	if(file == NULL) printf("ERROR! FAILED TO LOAD FILE!");
	else
	{
		file_temp = fopen("temp.tmp", "wb");				// wrzuca wszystko do pliku tymczasowego
		while(1)
		{
			temp = fgetc(file);
			if(temp == EOF) break;
			for(i = 0; i <= strlen(sentence); i++)			// sprawdzanie ciagu, jesli wszystkie znaki sie zgadzaja to bool_check = 1;
			{
				if(temp == sentence[i])
				{
					bool_check = 0;
				}else if(sentence[i] == '\0')
				{
					bool_check = 1;
					break;
				}
				else
				{
					bool_check = 0;
					break;
				}
				if(i == 0) temp2 = temp;					// zapamietuje pierwszy  znak ciagu
				temp = fgetc(file);

			}
			if(bool_check == 1)								// jesli ciagi sie zgadzaja, to wrzuca ten do podmiany
			{
				fputs(toReplace, file_temp);
				bool_check = 0;								// zeruje bool_check
				fputc(temp, file_temp);						// dodaje znak ktory byl kolejny po ciagu.
			}
			else
			{
				fseek(file, -i, 1);							// jesli ciagi nie zgadzaja sie, cofa do miejsca gdzie byl pierwszy zgadzajacy sie znak
				if(i > 0)fputc(temp2, file_temp);			// jesli wiecej znakow sie zgadzalo (np. kot z kotek) to wrzuca zapamietany pierwszy znak z ciagu
				else fputc(temp, file_temp);				// jesli tylko jeden to (np. k z kotek) to wrzuca go
			} 

			
		}
		fclose(file);
		fclose(file_temp);
	}
	file_temp = fopen("temp.tmp", "rb");											// Wszystko wraca z tymczasowego do poczatkowego pliku juz zamienione.
	if(file_temp == NULL) printf("ERROR! FAILED TO LOAD FILE!");
	else
	{
		file = fopen(file_name, "wb");
		while(1)
		{
			temp = fgetc(file_temp);
			if(temp == EOF) break;
			fputc(temp, file);
		}
		fclose(file);
		fclose(file_temp);
		remove("temp.tmp");
	}


	printf("\n\n");
	system("PAUSE");
	return 0;
}