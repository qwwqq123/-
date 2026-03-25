#include<stdio.h>

int main()
{
	int y, m, d;
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf_s("%d %d %d", &y, &m, &d);
	if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
	{
				month[1] = 29;
	}
	int day = 0;
	for (int i = 0; i < m - 1; i++)
	{
		day += month[i];
	}
	printf("%d", day + d);
	return 0;
}