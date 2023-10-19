#include <stdio.h>
#include <math.h>
#include <windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a = 2.53, y, x;
	y = modf(a, &x);
	printf("%.0lf студента групи ПІ-%.0lf %.0lf рази отримали по %.0lf за залік з математики", x, y * 100, x, x);
	return 0;
}