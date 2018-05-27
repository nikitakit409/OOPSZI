#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

_Bool isInArea(double x, double y)
{
	int flag = 0;
	if ((x*x + y * y <= 1) && ((x >= 0 && y <= 0)) || ((x<=0 && y>=0)) )
		flag = 1;
	return flag;

}

double f(double x)
{
	
	return (x >= 1.1) ? 9-x : sin(3*x)/(pow(x,4)+1);
	
}

int main(void)
{
	printf("1. Popadanie\n");
	printf("2. Sistema\n");
	int input;
	scanf("%d", &input);
	switch (input)
	{
		float x, y, r;
	case 1:

		printf("%s\n", "Vvodi koordinati (x,y):");
		scanf("%f%f", &x, &y);
		if (isInArea(x, y) == 1) printf("%s\n", "Popal.");
		else printf("%s\n", "Ne popal.");
		_getch();
		return 0;
		break;
	case 2:
		printf("%s\n", "Vvodi (x):");
		scanf("%f", &x);
		r = f(x);
		printf("\nRes = %f", r);
		_getch();
		return 0;
		break;
	default:
		printf("Nepravil'no vvel ejje");
		break;
	}
	getchar();
	getchar();
	return 0;
}

