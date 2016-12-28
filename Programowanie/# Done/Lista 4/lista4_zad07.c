/*
Napisz program, który pobiera linię tekstu od użytkownika. Następnie tworzy plik o
nazwie: moj.tex zawierający poprawny dokument w L ATEX z podanym tekstem. (Jeżeli
w systemie jest zainstalowany L ATEX to może automatycznie wywołać kompilację pliku
moj.tex do formatu .pdf )
*/
#include<stdio.h>
#include<ctype.h>
main()
{
	char string[200];
	FILE *tex_file;
	printf("Wpisz cos: ");
	fgets(string, 200, stdin);
	string[strlen(string)-1] = '\0';

	tex_file = fopen("moj.tex", "wb");
	fputs("\n\\documentclass[10pt,a4paper]{article}\n\\usepackage[latin1]{inputenc}\n\\usepackage{amsmath}\n\\usepackage{amsfonts}\n\\usepackage{amssymb}\n\\usepackage{graphicx}\n\\begin{document}\n", tex_file);
	fputs(string, tex_file);
	fputs("\n\\end{document}",tex_file);
	fclose(tex_file);
	system("pdflatex moj.tex");
	system("del moj.aux moj.log");
	printf("\n\n");
	system("PAUSE");
	return 0;
}