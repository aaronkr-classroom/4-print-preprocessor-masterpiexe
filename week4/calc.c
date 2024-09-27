#include<stdio.h>
#include<math.h>
//#define PI 3.141592
#include "calc.h"
double sum(double, double);
double sub(double, double);
double mult(double, double);
double div(double, double);
int rem(int, int);


double power(double base, double exponent);
double squareRoot(double num);
double areaOfCircle(double radius);
double circumstanceOfCircle(double radius);

double sum(double x, double y)
{
	return x + y;
}
double sub(double x, double y)
{
	return x - y;
}
double mult(double x, double y)
{
	return x * y;
}
double div(double x, double y)
{
	return x / y;
}
int rem(int x, int y)
{
	return x % y;
}
double power(double base, double exponent) 
{
	return pow(base, exponent);
}
double squareRoot(double num)
{
	if (num >= 0)
		return sqrt(num);
	else
		printf("Error");
	return 0;
}
double areaOfCircle(double radius)
{
	return radius * radius * M_PI;
}
double circumstanceOfCircle(double radius)
{
	return 2 * M_PI * radius;
}