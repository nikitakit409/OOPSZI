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
		printf("������� 1\n");
		printf("������� 2\n");
		printf("������� 3\n");
		printf("������� 4\n");
		printf("������� 5\n");
		printf("����� - 6\n\n ");
		int n = 0, k = 0;
		double eps = 0.0;
		printf("������� ����� �������: ");
		scanf_s("%d", &numOfTask);
		switch (numOfTask)
		{
		case 1:
			system("cls");
			printf("������� 1\n");
			printf("������� ����� ��������� n:");
			scanf_s("%d", &n);
			printf("����� = %f\n\n", summ(n));
			system("pause");
			break;

		case 2:
			system("cls");
			printf("������� 2\n");
			printf("������� �������� eps =");
			scanf_s("%lf", &eps);
			printf("Sum is=%f\n\n", summ2(eps));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("������� 3 \n");
			printf("������� n= ");
			scanf_s("%d", &n);
			printf("������� k= ");
			scanf_s("%d", &k);
			printf("������������������ = ");
			print(n, k);
			system("pause");

		case 4:
			system("cls");
			printf("������� 4 \n");
			printf("������� eps = ");
			scanf_s("%lf", &eps);
			printf("����� = %d\n\n", findFirstElement(eps));
			system("pause");
			break;

		case 5:
			system("cls");
			printf("������� 5\n");
			printf("������� eps = ");
			scanf_s("%lf", &eps);
			printf("����� = %d\n\n", findFirstNegativeElement(eps));
			system("pause");
			break;
		case 6:
			i = -1;
			break;

		default:
			printf("������������ ���� \n");
			system("pause");
		}
	}
	system("pause");
	return (0);
}
���������� ������� ����� while:
//������� 1.2 � �������� ��� ����� task1.c
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

//������� 2.2 � �������� ��� ����� task2.c

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

//������� 3.2� �������� ��� ����� task3.c

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

//������� 4.2 � �������� ��� ����� task4.c

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






//������� 5.2� �������� ��� ����� task5.c

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
//������� 6.2 � �������� ��� ����� task6.c

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
		printf("������� 1\n");
		printf("������� 2\n");
		printf("������� 3\n");
		printf("������� 4\n");
		printf("������� 5\n");
		printf("����� - 6\n\n");
		int n = 0, k = 0;
		double eps = 0.0;

		printf("������� ����� �������: ");
		scanf_s("%d", &numOfTask);
		switch (numOfTask)
		{
		case 1:
			system("cls");
			printf("������� 1\n");
			printf("������� ����� ��������� n: ");
			scanf_s("%d", &n);
			printf("C���� = %lf\n\n", summ(n));
			system("pause");
			break;


		case 2:
			system("cls");
			printf("������� 2\n");
			printf("������� �������� eps = ");
			scanf_s("%lf", &eps);
			printf("����� = %f\n\n", summ2(eps));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("������� 3\n");
			printf("������� n=");
			scanf_s("%d", &n);
			printf("������� k=");
			scanf_s("%d", &k);
			printf("������������������ = \n");
			print(n, k);
			system("pause");
			break;
		case 4:
			system("cls");
			printf("������� 4\n");
			printf("������� �ps = ");
			scanf_s("%lf", &eps);
			printf("����� =  %d\n\n", findFirstElement(eps));
			system("pause");
			break;
		case 5:
			system("cls");
			printf("������� 5\n");
			printf("������� eps = ");
			scanf_s("%lf", &eps);
			printf("����� = %d\n\n", findFirstNegativeElement(eps));
			system("pause");
			break;
		case 6:
			i = -1;
			break;
		default:
			printf("������������ ���� \n");
			system("pause");
		}

	}
}








//���������� ������� ����� do while
//������� 1.3 � �������� ��� ����� task1.c

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
//������� 2.3 � �������� ��� ����� task2.c

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







//������� 3.3 � �������� ��� ����� task3.c

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


//������� 4.3 � �������� ��� ����� task4.c

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


//������� 5.3 � �������� ��� ����� task5.c

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


//������� 6.3 � �������� ��� ����� task6.c

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
		printf("�������� �������: \n");
		printf("������� 1\n");
		printf("������� 2\n");
		printf("������� 3\n");
		printf("������� 4\n");
		printf("������� 5\n");
		printf("����� - 6\n\n");
		int n = 0, k = 0;
		double eps = 0.0;
		scanf_s("%d", &numOfTask);

		switch (numOfTask)
		{
		case 1:
			system("cls");
			printf("������� 1\n");
			printf("������� ����� ��������� n: ");
			scanf_s("%d", &n);
			printf("�����=%lf\n\n", summ(n));
			system("pause");
			break;

		case 2:
			system("cls");
			printf("������� 2\n");
			printf("������� �������� e: ");
			scanf_s("%lf", &eps);
			printf("�����=%lf\n\n", summ2(eps));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("������� 3\n");
			printf("������� ����� n: ");
			scanf_s("%d", &n);
			printf("������� ����� k: ");
			scanf_s("%d", &k);
			printf("������������������: ");
			print(n, k);
			printf("\n\n");
			system("pause");
			break;

		case 4:
			system("cls");
			printf("������� 4\n");
			printf("������� ����� eps: ");
			scanf_s("%lf", &eps);
			printf("�����: %d\n\n", findFirstElement(eps));
			system("pause");
			break;

		case 5:
			system("cls");
			printf("������� 5\n");
			printf("������� ����� eps: ");
			scanf_s("%lf", &eps);
			printf("�����: %d\n\n", findFirstNegativeElement(eps));
			system("pause");
			break;

		case 6:
			i = -1;
			break;

		default:
			printf("������������ ����\n");
			system("pause");
		}

	} while (i != -1);

	system("pause");
	return (0);
}

