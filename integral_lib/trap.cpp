#include "f.h"

double trap(double a, double b, double h, double n)
{
	double Integral;
	int i;
	Integral = h * (f(a) + f(b)) / 2.0;
	for (i = 1; i <= n - 1; i++)
	Integral = Integral + h * f(a + h * i);
	return Integral;
}