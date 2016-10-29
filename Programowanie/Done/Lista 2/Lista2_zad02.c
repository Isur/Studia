#include<stdio.h>
#include<stdlib.h>
double findMin();
double findMax();


double findMin(double array[], int arraySize)
{
	double min = 0;
	int i = 0;
	min = array[0];
	for (i = 0; i < arraySize; i++)
	{
		if (min > array[i])
		{
			min = array[i];
		}

	}

	return min;
}
double findMax(double array[], int arraySize)
{
	double max = 0;
	int i = 0;
	max = array[0];
	for (i = 0; i < arraySize; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}

	}

	return max;
}
main()
{
	double array[10];
	double min, max;
	double findMin(), findMax();
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("Podaj %d liczbe: ", i + 1);
		scanf("%lf", &array[i]);
		printf("\n");
	}
	min = findMin(array, (sizeof array / sizeof *array));
	max = findMax(array, (sizeof array / sizeof *array));

	printf("\n Najwieksza wartosc z tablicy: %lf", max);
	printf("\n Najmniejsza wartosc z tablicy: %lf", min);
	printf("\n");

	system("PAUSE");
	return 0;
}