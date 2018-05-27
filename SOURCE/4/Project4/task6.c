#include <stdio.h>
int zadanie6(int *arr, int n)

{
	//Вариант 3 пузырьковая сортировка
	int j, tmp;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n;i++) {
			for (int j = 0; j < (n - 1); j++) 
		    {
				if (arr[j] > arr[j + 1]) {
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			// выводим элементы массива
			printf("arr[%d]=", i + 1);
		}
		system("pause");
		return 0;
	}