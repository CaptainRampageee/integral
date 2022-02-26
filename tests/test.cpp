#include "gtest/gtest.h"
#include "../integral_lib/is.h"
#include "../integral_lib/f.h"
#include "../integral_lib/trap.h"
#include "../integral_lib/cr.h"

double Integral; // здесь будет интеграл
double a = 0.0, b = 1.0; // задаём отрезок интегрирования
double h = 0.1;// задаём шаг интегрирования
double n = 10; // задаём число разбиений n

TEST(arifm, summ) {
	double a=8, b=4, c;
	c = a + b;
	EXPECT_EQ(c, 12);
}

TEST(integral1, Central_rectangles) {
	Integral = round(cr(a, h, n) * 10000) / 10000;
	EXPECT_EQ(Integral, 0.4599);
}

TEST(integral2, Trapezoid) {
	Integral = round(trap(a, b, h, n) * 10000) / 10000;
	EXPECT_EQ(Integral, 0.4593);
}

TEST(integral, integral_simpsona) {
	Integral = round(integral_simpsona(a, b, h, n) * 10000) / 10000;
	EXPECT_EQ(Integral, 0.4597);
}