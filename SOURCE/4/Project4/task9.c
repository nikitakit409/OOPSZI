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
