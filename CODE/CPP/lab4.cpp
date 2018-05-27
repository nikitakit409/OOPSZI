
//�������� ��� task1.c
#include <math.h>
#include <stdio.h>
float zadanie1(int *x)
{
	if (*x != 0) /*����������� ����*/
	{
		printf("�1\n");
		printf("����� = %p , �������� = %d\n", x, *x);
		++*x;
		printf("����� �������� = %d\n", *x);
	}
	else
		printf("��������� ������");
}

//�������� ��� task2.c
#include <stdio.h>
#include <math.h>
float zadanie2()
{
	int g;
	printf("�2\n");
	printf("������� ����� = ");
	scanf_s("%d", &g);
	printf("����� = %p, ��������  = %d\n", &g, g);
	task1(&g);
	printf("����� = %p, �������� = %d\n", &g, g);
}

//�������� ��� task3.c
#include <stdio.h>
#include <math.h>
float zadanie3()
{
	printf("�3\n");
	int *d = (int *)malloc(sizeof(int)); /*��������� ������*/
	printf("������� ����� ");
	scanf_s("%d", d);

	printf("����� = %p, �������� = %d \n", d, *d);
	zadanie1(d);
	printf("����� = %p, �������� = %d \n", d, *d);
	free(d); /*����������� ������*/
}

//�������� ��� task4.c
#include <stdio.h>

int zadanie4(int *arr, int n)
{
	for (int i = 0; i < n; ++i) 
	{
		printf("arr[%d]=", i + 1);
		scanf_s("%d", &arr[i]); /*����� �������*/
	}
}

//�������� ��� task5.c
#include <stdio.h>

int zadanie5(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("arr[%d]=%d\n", i + 1, arr[i]); /*���� ������� �����������*/
	}
}

//�������� ��� task6.c
#include <stdio.h>

int zadanie6(int *arr, int n)
{
	//������� 3 ����������� ����������
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
			// ������� �������� �������
			printf("arr[%d]=", i + 1);
		}
		system("pause");
		return 0;
	}


//�������� ��� task7.c
#include <stdio.h>
int zadanie7()
{
	//�������� �� ����� ������ �� N ���������
	//����� N ������������ ���������� � ����
	const int n = 10;
	int arr[10];
	zadanie4(arr, n);
	zadanie5(arr, n);
	zadanie6(arr, n);
}

//�������� ��� task8.c
#include <stdio.h>

int zadanie8()
{
	int n = 0;
	printf("������ ������� n = ");
	scanf_s("%d", &n);
	int *arr = (int *)malloc(sizeof(int)*n);
	zadanie4(arr, n);
	zadanie5(arr, n);
	zadanie6(arr, n);
	free(arr);
}

//�������� ��� task9.c
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
		printf("������� 2 - 1\n");
		printf("������� 3 - 2\n");
		printf("������� 7 - 3\n");
		printf("������� 8 - 4\n");
		printf("����� - 5\n");
		printf("�������� �������\n");
		scanf_s("%d", &x);
		switch (x)
		{
		case 1:
		{
			printf("����� � �����\n");
			zadanie2();
			break;
		}
		case 2:
		{
			printf("����� � ������������ ������\n");
			zadanie3();
			break;
		}
		case 3:
		{
			printf("������ �� n-��������� � �����\n");
			zadanie7();
			break;
		}
		case 4:
			printf("������ �� n-��������� � ������������ ������\n");
			zadanie8();
			break;
		case 5:
			return(0);
		default:
			printf("�������� ����\n");
			break;
		}
		getchar();
		getchar();
	}
	return(0);
}

