#include "f.h"

double cr(double a, double h, double n)
{
	double Integral;
	int i;
	Integral = 0.0;
	for (i = 1; i <= n; i++)
		Integral = Integral + h * f(a + h * (i - 0.5));
	return Integral;
}