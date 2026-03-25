#include <stdio.h>

int main()
{
	int a[5][5], m, i, j,n=0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	scanf_s("%d", &m);
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i][j] == m)
			{
				printf("第%d行第%d列\n", i + 1, j + 1);
				n= 1;
				break;
			}
		}
	}
	if (n == 0)
	{ 
		printf("未找到\n");
	}
	return 0;
}