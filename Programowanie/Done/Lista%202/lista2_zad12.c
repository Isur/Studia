#include<stdio.h>

void decode(int *numbers, int size)
{
	int  i = 0, temp = 0, x = 0;
	char binary[1024][8], code[1024];

	for (i = 0; i < size; i++)
	{
	    x = 7;
		temp = numbers[i];
		do
		{
			if (temp % 2 == 0)
			{
				binary[i][x] = '0';
				temp /= 2;
				x--;
			}
			else
			{
				binary[i][x] = '1';
				temp /= 2;
				x--;
			}
		} while (temp >= 1);
		for (x = x; x >= 0 ; x--)
		{
			binary[i][x] = '0';
		}
	}
	for (i = i; i < size; i++)
	{
		for (x = 0; x < 8; x++)
		{
			binary[i][x] = '#';
		}
	}
	temp = 0;
	for (i = 0; i < size; i++)
	{
		for (x = 0; (x < 8); x++)
		{
            code[temp] = binary[i][x];
            temp++;
 		}
	}
	for(i = 0; i < temp; i++)
    {
        printf("%c", code[i]);
    }
	printf("\n");
	for(i = 0; i < temp; i++)
    {
        if(code[i] == '1')
        {
            if(code[i+1] == '0')
            {
                printf("a");
                i++;
                continue;
            }
            else if(code[i+1] == '1')
            {
                if(code[i+2] == '0')
                {
                    printf("c");
                    i += 2;
                    continue;
                }
                else if(code[i+2] == '1')
                {
                    if(code[1+3]== '1')
                        {
                            printf("d");
                            i += 3;
                            continue;
                        }
                }
            }
        }
        else if(code[i] == '0')
        {
            if(code[i+1] == '1')
            {
                printf("b");
                i++;
                continue;
            }
        }




    }
}

int power(int a, int b)
{
	int i = 0;
	if (b <= a)
	{
		a = b;
	}
	for (i = 2; i <= b; i++)
	{
		a *= 2;
	}
	return a;
}

void codeStrings(char *newCode, int x)
{
	int i = 0, z = 0, j = 0, temp = 0;
	int numbers[1024], num[128];
	printf("\n");
	for (i = 0; i < x; i++)
	{
		if ((i + 1) % 8 == 0)
		{
			temp = 0;
			for (j = i; j >= (i - 7); j--)
			{
				if (newCode[j] != '0')
				{
					temp += (newCode[j] - 48)*(power(2, i - j));
				}
			}
			printf("%d", temp);
		}

	}
	printf("\n");


}

int mod8(int x, char *newCode)
{
	if (x % 8 == 0)
	{
		newCode[x] = '\n';
	}
	else
	{
		for (x; x % 8 != 0; x++)
			newCode[x] = '0';
		newCode[x] = '\n';
	}
	return x;
}

void code(char *sentence)
{
	int i = 0, j = 0, x = 0;
	char code[1024][4], newCode[1024];
	for (i = 0; sentence[i] != '\n'; i++)
	{
		if (sentence[i] == 'a')
		{
			code[i][0] = '1';
			code[i][1] = '0';
			code[i][2] = '#';
			code[i][3] = '#';
		}
		else if (sentence[i] == 'b')
		{
			code[i][0] = '0';
			code[i][1] = '1';
			code[i][2] = '#';
			code[i][3] = '#';
		}
		else if (sentence[i] == 'c')
		{
			code[i][0] = '1';
			code[i][1] = '1';
			code[i][2] = '0';
			code[i][3] = '#';
		}
		else if (sentence[i] == 'd')
		{
			code[i][0] = '1';
			code[i][1] = '1';
			code[i][2] = '1';
			code[i][3] = '1';
		}
	}
	code[i][0] = '#';
	code[i][1] = '#';
	code[i][2] = '#';
	code[i][3] = '#';
	for (i = 0; code[i][0] != '#'; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (code[i][j] != '#')
			{
				newCode[x] = code[i][j];
				x++;
			}
		}
	}

	x = mod8(x, &newCode);

	for (i = 0; newCode[i] != '\n'; i++)
	{
		printf("%c", newCode[i]);
	}
	codeStrings(&newCode, x);
}
main()
{
	char sentence[1024];
	char menu, next;
	int numbers[1024];
	int i = 0;
	printf("Chcesz kodowac?[1] Chcesz Odkodowac?[2]");
	scanf("%c", &menu);
	getchar();
	if (menu == '1')
	{
		printf("Podaj ciag znakow 'a','b','c','d': ");
		fgets(sentence, 1024, stdin);
		code(&sentence);
	}
	else if (menu == '2')
	{
		do
		{
			next = 'n';
			printf("Podaj ciag liczb:[0-255]");
			scanf("%d", &numbers[i]);
			getchar();
			printf("Chcesz podac kolejna liczbe? [t/n]");
			scanf("%c", &next);
			getchar();
			i++;
		} while (next == 't' || next == 'T');
		decode(&numbers, i);
	}






	system("PAUSE");
	return 0;
}
