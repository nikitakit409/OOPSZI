#include <stdio.h>
#include <math.h>
int main(void)
{
	double x, func;
	x = 3.14/2;
	func = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
	printf("x=pi/2  Answer is = %.4lf\n", func);
	printf("Enter x=");
	scanf("%lf", &x);
	func = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);

	printf("Answer is = %.4lf", func);
	getchar();
	getchar();

	return(0);
}
