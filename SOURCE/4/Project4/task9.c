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
