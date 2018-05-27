#include <stdio.h>
#include <math.h>
float zadanie2()
{
	int g;
	printf("№2\n");
	printf("Введите число = ");
	scanf_s("%d", &g);
	printf("Адрес = %p, Значение  = %d\n", &g, g);
	zadanie1(&g);
	printf("Адрес = %p, Значение = %d\n", &g, g);
}
