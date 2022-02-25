#include <math.h>
#include "f.h"

double integral_simpsona(double a, double b, double h, double n)
{
	double Integral;
	int i;
	Integral = h * (f(a) + f(b)) / 6.0;
	for (i = 1; i <= n; i++)
	Integral = Integral + 4.0 / 6.0 * h * f(a + h * (i - 0.5));
	for (i = 1; i <= n - 1; i++)
	Integral = Integral + 2.0 / 6.0 * h * f(a + h * i);
	return Integral;
}