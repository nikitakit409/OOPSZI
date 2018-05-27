#include <math.h>
#include <stdio.h>

double summ(int n)
{
	double a, sum = 0.0;
	for (double i = 0; i <= n - 1; i++)
	{
		a = pow(-1, i)*((i+1) / (pow(i,3)+2));
		sum = sum + a;
	}
	return (sum);
}
//task2.c
#include <math.h>
#include <stdio.h>

double summ2(double eps)
{
	double a = 1.0 + eps;
	double value = 0.0;
	for (int i = 0; fabs(a) > 0; ++i)
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		value = value + a;
	}
	return(value);
}

//task3.c

#include <math.h>
#include <stdio.h>

double a;
void print(int n, int k)
{
	for (int i = 0; i < n; ++i)
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if ((i + 1) % k == 0)
			continue;
		printf("%.2lf\n", a);
	}
}

//task4.c

#include <math.h>

double a;
int m = -1;

int findFirstElement(double eps)
{
	for (int i = 0; ; ++i)
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if (fabs(a) <= eps)
		{
			m = i + 1;
			break;
		}

	}
	return(m);
}

// task5.c

#include <math.h>
#include <stdio.h>

int findFirstNegativeElement(double eps)
{
	double a;
	for (int i = 0; ; ++i)
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if (fabs(a) <= eps && a < 0.0)
		{
			return(i + 1);
		}
	}
}


//task6.c
#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include "Header.h"
int main(void)
{
	setlocale(LC_ALL, "RUS");
	int numOfTask;
	for (int i = 0; i != -1;)
	{
		system("cls");
		printf("Задание 1\n");
		printf("Задание 2\n");
		printf("Задание 3\n");
		printf("Задание 4\n");
		printf("Задание 5\n");
		printf("Выход - 6\n\n ");
		int n = 0, k = 0;
		double eps = 0.0;
		printf("Введите номер задания: ");
		scanf_s("%d", &numOfTask);
		switch (numOfTask)
		{
		case 1:
			system("cls");
			printf("Задание 1\n");
			printf("Введите число слагаемых n:");
			scanf_s("%d", &n);
			printf("Сумма = %f\n\n", summ(n));
			system("pause");
			break;

		case 2:
			system("cls");
			printf("Задание 2\n");
			printf("Введите точность eps =");
			scanf_s("%lf", &eps);
			printf("Sum is=%f\n\n", summ2(eps));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("Задание 3 \n");
			printf("Введите n= ");
			scanf_s("%d", &n);
			printf("Введите k= ");
			scanf_s("%d", &k);
			printf("Последовательность = ");
			print(n, k);
			system("pause");

		case 4:
			system("cls");
			printf("Задание 4 \n");
			printf("Введите eps = ");
			scanf_s("%lf", &eps);
			printf("Номер = %d\n\n", findFirstElement(eps));
			system("pause");
			break;

		case 5:
			system("cls");
			printf("Задание 5\n");
			printf("Введите eps = ");
			scanf_s("%lf", &eps);
			printf("Номер = %d\n\n", findFirstNegativeElement(eps));
			system("pause");
			break;
		case 6:
			i = -1;
			break;

		default:
			printf("Неправильный ввод \n");
			system("pause");
		}
	}
	system("pause");
	return (0);
}
Реализация функций через while:
//Задание 1.2 – Исходный код файла task1.c
#include <math.h>
#include "Header.h"
double a, f;
double summ(int n)
{
	f = 0.0;
	int i = 0;

	while (i < n)
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		f += a;
		++i;
	}
	return (f);
}

//Задание 2.2 – Исходный код файла task2.c

#include <math.h>
#include "Header.h"
double a, f;
double summ2(double eps)
{
	a = eps + 1.0;
	f = 0.0;
	int i = 0;
	while (fabs(a) > eps)
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		f += a;
		++i;
	}
	return (f);
}

//Задание 3.2– Исходный код файла task3.c

#include <math.h>
#include <stdio.h>
#include "Header.h"
double a;
void print(int n, int k)
{
	int i = 0;
	while (i < n)
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if ((i + 1) % k == 0)
		{
			++i;
			continue;
		}
		++i;
		printf("%.2lf\n", a);
	}
}

//Задание 4.2 – Исходный код файла task4.c

#include <math.h>
#include "Header.h"
double a;
int m = -1;

int findFirstElement(double eps)
{
	int i = 0;
	while (i > -1)
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if (fabs(a) <= eps)
		{
			m = i + 1;
			break;
		}
		++i;
	}
	return(m);
}






//Задание 5.2– Исходный код файла task5.c

#include <math.h>
#include "Header.h"
double a;

int findFirstNegativeElement(double eps)
{
	int i = 0;
	while (i > -1)
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if (fabs(a) <= eps && a < 0.0)
		{
			return(i + 1);
		}
		++i;
	}
}
//Задание 6.2 – Исходный код файла task6.c

#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include "Header.h"

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int i = 0, numOfTask;

	while (i != -1)
	{
		system("cls");
		printf("Задание 1\n");
		printf("Задание 2\n");
		printf("Задание 3\n");
		printf("Задание 4\n");
		printf("Задание 5\n");
		printf("Выход - 6\n\n");
		int n = 0, k = 0;
		double eps = 0.0;

		printf("Введите номер задания: ");
		scanf_s("%d", &numOfTask);
		switch (numOfTask)
		{
		case 1:
			system("cls");
			printf("Задание 1\n");
			printf("Введите число слагаемых n: ");
			scanf_s("%d", &n);
			printf("Cумма = %lf\n\n", summ(n));
			system("pause");
			break;


		case 2:
			system("cls");
			printf("Задание 2\n");
			printf("Введите точность eps = ");
			scanf_s("%lf", &eps);
			printf("Сумма = %f\n\n", summ2(eps));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("Задание 3\n");
			printf("Введите n=");
			scanf_s("%d", &n);
			printf("Введите k=");
			scanf_s("%d", &k);
			printf("Последовательность = \n");
			print(n, k);
			system("pause");
			break;
		case 4:
			system("cls");
			printf("Задание 4\n");
			printf("Введите еps = ");
			scanf_s("%lf", &eps);
			printf("Номер =  %d\n\n", findFirstElement(eps));
			system("pause");
			break;
		case 5:
			system("cls");
			printf("Задание 5\n");
			printf("Введите eps = ");
			scanf_s("%lf", &eps);
			printf("Номер = %d\n\n", findFirstNegativeElement(eps));
			system("pause");
			break;
		case 6:
			i = -1;
			break;
		default:
			printf("Неправильный ввод \n");
			system("pause");
		}

	}
}








//Реализация функции через do while
//Задание 1.3 – Исходный код файла task1.c

#include <math.h>
#include "Header.h"

double a, f;
double summ(int n)
{

	f = 0.0;
	int i = 0;

	do
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		f += a;
		++i;
	} while (i < n);
	return f;
}
//Задание 2.3 – Исходный код файла task2.c

#include <math.h>
#include "Header.h"
double a, f;

double summ2(double eps)
{
	a = eps + 1.0;
	f = 0.0;
	int i = 0;
	do
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		f += a;
		++i;
	} while (fabs(a) > eps);
	return(f);
}







//Задание 3.3 – Исходный код файла task3.c

#include <math.h>
#include <stdio.h>
#include "Header.h"

double a;
void print(int n, int k)
{

	int i = 0;
	do
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if ((i + 1) % k == 0)
		{
			++i;
			continue;
		}
		++i;
		printf("%f ", a);
	} while (i < n);
}


//Задание 4.3 – Исходный код файла task4.c

#include <math.h>
#include "Header.h"
double a;

int findFirstElement(double eps)
{
	int m = -1;
	int i = 0;
	do
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if (fabs(a) <= eps)
		{
			m = i + 1;
			break;
		}
		++i;
	} while (i > -1);
	return(m);
}


//Задание 5.3 – Исходный код файла task5.c

#include <math.h>
#include "Header.h"

double a;
int findFirstNegativeElement(double eps)
{
	int i = 0;
	do
	{
		a = pow(-1, i)*((i + 1) / (pow(i, 3) + 2));
		if (fabs(a) <= eps && a < 0.0)
		{
			return(i + 1);
		}
		++i;
	} while (i > -1);
}


//Листинг 6.3 – Исходный код файла task6.c

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include "Header.h"

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int i = 0;
	int numOfTask;
	do
	{
		system("cls");
		printf("Выберите задание: \n");
		printf("Задание 1\n");
		printf("Задание 2\n");
		printf("Задание 3\n");
		printf("Задание 4\n");
		printf("Задание 5\n");
		printf("Выход - 6\n\n");
		int n = 0, k = 0;
		double eps = 0.0;
		scanf_s("%d", &numOfTask);

		switch (numOfTask)
		{
		case 1:
			system("cls");
			printf("Задание 1\n");
			printf("Введите число слагаемых n: ");
			scanf_s("%d", &n);
			printf("Сумма=%lf\n\n", summ(n));
			system("pause");
			break;

		case 2:
			system("cls");
			printf("Задание 2\n");
			printf("Введите точность e: ");
			scanf_s("%lf", &eps);
			printf("Сумма=%lf\n\n", summ2(eps));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("Задание 3\n");
			printf("Введите число n: ");
			scanf_s("%d", &n);
			printf("Введите число k: ");
			scanf_s("%d", &k);
			printf("Последовательность: ");
			print(n, k);
			printf("\n\n");
			system("pause");
			break;

		case 4:
			system("cls");
			printf("Задание 4\n");
			printf("Введите число eps: ");
			scanf_s("%lf", &eps);
			printf("Номер: %d\n\n", findFirstElement(eps));
			system("pause");
			break;

		case 5:
			system("cls");
			printf("Задание 5\n");
			printf("Введите число eps: ");
			scanf_s("%lf", &eps);
			printf("Номер: %d\n\n", findFirstNegativeElement(eps));
			system("pause");
			break;

		case 6:
			i = -1;
			break;

		default:
			printf("Неправильный ввод\n");
			system("pause");
		}

	} while (i != -1);

	system("pause");
	return (0);
}

