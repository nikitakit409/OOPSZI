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
