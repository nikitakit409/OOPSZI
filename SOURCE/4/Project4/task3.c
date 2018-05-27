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
	free(d); /*освождаем память*/
}
