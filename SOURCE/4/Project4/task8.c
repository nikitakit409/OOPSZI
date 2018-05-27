#include <stdio.h>

int zadanie8()
{
	int n = 0;
	printf("Размер массива n = ");
	scanf_s("%d", &n);
	int *arr = (int *)malloc(sizeof(int)*n);
	zadanie4(arr, n);
	zadanie5(arr, n);
	zadanie6(arr, n);
	free(arr);
}
