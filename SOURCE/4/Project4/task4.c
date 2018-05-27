#include <stdio.h>

int zadanie4(int *arr, int n)
{
	for (int i = 0; i < n; ++i) 
	{
		printf("arr[%d]=", i + 1);
		scanf_s("%d", &arr[i]); /*вывод массива*/
	}
}
