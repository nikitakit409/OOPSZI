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
	free(d); /*��������� ������*/
}
