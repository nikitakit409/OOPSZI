//Исходный код файла task1.c
#define _CRT_SECURE_NO_WARNINGS 
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
//Исходный код файла task2.c
#define _CRT_SECURE_NO_WARNINGS 
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

//Исходный код файла task3.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
double func(double x);

int main(void)
{
	double x, y;
	x = 3.14;
	y = func(x);
	printf("x=3.14 Answer = %.4lf\n", y);
	printf("Enter x=");
	scanf("%lf", &x);

	y = func(x);

	printf("Answer = %.4lf", y);

	getchar();
	getchar();

	return(0);
}
double func(double x)
{
	double func;
	func = cos(x) + sin(x) + cos(3*x) + sin(3*x);
	return(func);
}
//Исходный код файла task4.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
double func();
double x, a;
int main(void)
{
	x = 3.14/2;
	func();
	printf("x=3.14/2 Answer = %.4lf\n", a);
	printf("Enter x=");
	scanf("%lf", &x);
	func();
	printf("Answer = %.4lf", a);
	getchar();
	getchar();

	return(0);
}
double func(void)
{

	a = cos(x)+ sin(x)+ cos(3*x)+ sin(3*x);
	return(0);
}


//Исходный код файла task5-main.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
double func(double x);

int main(void)
{
	double x, a;
	x = 3.14/2;
	a = func(x);
	printf("x=3.14/2 Answer = %.4lf\n", a);
	printf("Enter x=");
	scanf("%lf", &x);
	a = func(x);

	printf("Answer = %.4lf", a);
	getchar();
	getchar();
	return(0);
}
//Исходный код файла task5-func.с

#include <stdio.h>
#include <math.h>
double func(double x)
{
	double y;
	y = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
	return(y);
}

//Исходный код файла task6-main.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double x, a;
void func(void);
int main(void)
{
	x = 3.14/2;
	func();
	printf("x=3.14/2 Answer = %.4lf\n", a);
	printf("Enter x=");
	scanf("%lf", &x);
	func();
	printf("Answer = %.4lf", a);
	getchar();
	getchar();

	return(0);
}


//Исходный код файла task6-func.c
#include <math.h>
double a, x;
double func(void)
{
	a = cos(x) + sin(x) + cos(3*x) + sin(3*x);
	return(0);
}

//Исходный код файла task7-main.c
#define _CRT_SECURE_NO_WARNINGS
#include "func.h"
#include <stdio.h>
#include <math.h>

int main(void)
{
	x = 3.14/2;
	func();
	printf("x=3.14/2 Answer is = %.4lf\n", a);
	printf("Enter x=");
	scanf("%lf", &x);
	func();
	printf("Answer is = %.4lf", a);
	getchar();
	getchar();
	return(0);
}
//Исходный код файла task7-func.c
#include "func.h"
#include <math.h>
double func(void)
{
	a = cos(x) + sin(x) + cos(3*x) + sin(3*x);
}
//Исходный код файла func.h
#pragma once
double x, a;
double func();

