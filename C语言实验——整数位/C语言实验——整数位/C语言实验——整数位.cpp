#include<stdio.h>

int main()
{
	int a[5],n;
    int  count = 0;
	scanf_s("%d", &n);
	while (n > 0)
	{
		a[count] = n % 10;
		n = n / 10;
		count++;
	}
	printf("%d\n", count);
	int i;
	for (i = count - 1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for ( i = 0; i < count; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
		
}