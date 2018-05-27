
//Исходный код task1.c
#include <math.h>
#include <stdio.h>
float zadanie1(int *x)
{
	if (*x != 0) /*неравенство нулю*/
	{
		printf("№1\n");
		printf("Адрес = %p , значение = %d\n", x, *x);
		++*x;
		printf("Новое значение = %d\n", *x);
	}
	else
		printf("Указатель пустой");
}

//Исходный код task2.c
#include <stdio.h>
#include <math.h>
float zadanie2()
{
	int g;
	printf("№2\n");
	printf("Введите число = ");
	scanf_s("%d", &g);
	printf("Адрес = %p, Значение  = %d\n", &g, g);
	task1(&g);
	printf("Адрес = %p, Значение = %d\n", &g, g);
}

//Исходный код task3.c
#include <stdio.h>
#include <math.h>
float zadanie3()
{
	printf("№3\n");
	int *d = (int *)malloc(sizeof(int)); /*выделение памяти*/
	printf("Введите число ");
	scanf_s("%d", d);

	printf("Адрес = %p, Значение = %d \n", d, *d);
	zadanie1(d);
	printf("Адрес = %p, Значение = %d \n", d, *d);
	free(d); /*освобождаем память*/
}

//Исходный код task4.c
#include <stdio.h>

int zadanie4(int *arr, int n)
{
	for (int i = 0; i < n; ++i) 
	{
		printf("arr[%d]=", i + 1);
		scanf_s("%d", &arr[i]); /*вывод массива*/
	}
}

//Исходный код task5.c
#include <stdio.h>

int zadanie5(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("arr[%d]=%d\n", i + 1, arr[i]); /*ввод массива клавиатурой*/
	}
}

//Исходный код task6.c
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


//Исходный код task7.c
#include <stdio.h>
int zadanie7()
{
	//создадим на стеке массив из N элементов
	//число N определяется константой в коде
	const int n = 10;
	int arr[10];
	zadanie4(arr, n);
	zadanie5(arr, n);
	zadanie6(arr, n);
}

//Исходный код task8.c
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

//Исходный код task9.c
#include <stdio.h>
#include <stdlib.h>

float zadanie1(int *);
float zadanie2();
float zadanie3();
int zadanie4(int *arr, int n);
int zadanie5(int *arr, int n);
int zadanie6(int *arr, int n);
int zadanie7();
int zadanie8();
int main(void)
{
	system("CHCP 1251");
	system("cls");
	int g, x;

	while (g = -1)
	{
		printf("Задание 2 - 1\n");
		printf("Задание 3 - 2\n");
		printf("Задание 7 - 3\n");
		printf("Задание 8 - 4\n");
		printf("Выход - 5\n");
		printf("Выберите задание\n");
		scanf_s("%d", &x);
		switch (x)
		{
		case 1:
		{
			printf("Число в стеке\n");
			zadanie2();
			break;
		}
		case 2:
		{
			printf("Число в динамической памяти\n");
			zadanie3();
			break;
		}
		case 3:
		{
			printf("Массив из n-элементов в стеке\n");
			zadanie7();
			break;
		}
		case 4:
			printf("Массив из n-элементов в динамической памяти\n");
			zadanie8();
			break;
		case 5:
			return(0);
		default:
			printf("Неверный ввод\n");
			break;
		}
		getchar();
		getchar();
	}
	return(0);
}

