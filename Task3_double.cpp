#include <stdio.h>
#include <math.h>
#include <Windows.h>
int main()
{
	double a = 1000, b = 0.0001, result_double;
	double term1 = (a + b) * (a + b) * (a + b);
	double term2 = (a * a * a) + (3 * a * a * b);
	double term3 = 3 * a * b * b * b;
	result_double = term1 - (term2 / term3);
	printf("Результат для double: %lf\n", result_double);
	return 0;
}