#include <stdio.h>
#include <Windows.h>
#include <math.h>
int main()
{
	int m = 7, n = 3, x, y, z, x1, y1, z1;
	x = n - m;
	y = (m--) < n;
	z = (n++) > m;
	x1 = n - m;
	y1 = (m--) < n;
	z1 = (n++) > m;
	printf("1) n---m = %d\n", x);
	printf("2) m--<n = %d\n", y);
	printf("3) n++>m = %d\n", z);
	printf("4) n---m = %d\n", x1);
	printf("5) m--<n = %d\n", y1);
	printf("6) n++>m = %d\n", z1);
	return 0;
}