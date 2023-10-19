#include <stdio.h>
#include <Windows.h>
int main()
{
	int x1 = 555;
	int x2 = 666;
	printf("|%-7d%-7d|\n", x1, x2);
	printf("|%7d%7d|\n", x1, x2);
	printf("|%-7d%-7d|\n", x1, x2);
	printf("|%7d%7d|\n", x1, x2);
	return 0;
}