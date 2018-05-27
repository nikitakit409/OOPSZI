#define _CRT_SECURE_NO_WARNINGS // для возможности использования scanf
#include <stdio.h>
#include <math.h>
double func(double x)
{
	double func;
	func = cos(x) + sin(x) + cos(3*x) + sin(3*x);
	return(func);
}
int main(void)
{
	double x, y;
	x = 3.14/2;
	y = func(x);
	printf("x=3.14/2 Answer = %.4lf\n", y);
	printf("Enter x=");
	scanf("%lf", &x);
	y = func(x);
	printf("Answer = %.4lf", y);

	getchar();
	getchar();

	return(0);
}
