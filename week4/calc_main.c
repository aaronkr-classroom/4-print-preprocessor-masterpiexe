//calc_main.c
#include<stdio.h>
#include"calc.h"
int main()
{
	double a = 2;
	double b = 3;
	printf("%.1f + %.1f = %.1f\n", a, b, sum(a, b));
	printf("%.1f - %.1f = %.1f\n", a, b, sub(a, b));
	printf("%.1f * %.1f = %.1f\n", a, b, mult(a, b));
	printf("%.1f / %.1f = %.6f\n", a, b, div(a, b));
	printf("%d %% %d = %d\n", (int)a, (int)b, rem((int)a, (int)b));

	double x = 4;
	double y = 2;


	printf("%.1f^%.1f=%.1f\n", x, y, power(x, y));
	printf("sqrt of %.1f=%.1f\n", x, sqrt(x));
	printf("area of circle=%.1f\n", areaOfCircle(x));
	printf("circumstanceOfCircle=%.1f\n", circumstanceOfCircle(x));

	return 0;
}