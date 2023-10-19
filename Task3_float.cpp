#include <stdio.h>
#include <math.h>
#include <Windows.h>
int main()
{
	float a = 1000, b = 0.0001, result_float;
	float term1 = (a + b) * (a + b) * (a + b);
	float term2 = (a * a * a) + (3 * a * a * b);
	float term3 = 3 * a * b * b * b;
	result_float = term1 - (term2 / term3);
	printf("Результат для float: %f\n", result_float);
	return 0;
}