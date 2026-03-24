#include<stdio.h>

int abc(int a)
{
	int i;
	for ( i = 1; i <= a; i++)
	{
		printf("%d", i);
	}
	for (i=i-2; i >= 1; i--)
	{
		printf("%d", i);
	}
	printf("\n");
	return 0;
}

int main()
{
	int n;
	scanf_s("%d", &n);
	int i;
	for ( i = 1; i <= n; i++)
	{
		for (int j = n - i; j >= 1; j--)
		{
			printf(" ");
		}
		abc(i);
	}
	for (i = i - 2; i >= 1; i--)
	{
		for (int j = n - i; j >= 1; j--)
		{
			printf(" ");
		}
		abc(i);
	}
	return 0;
}