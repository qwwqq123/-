#include<stdio.h>
#include<math.h>

int main()
{
	int a[7];
	int aver=0;
	int i;
	for (i = 0; i < 7; i++)
	{
		scanf_s("%d", &a[i]);
		aver += a[i];
	}
	aver /= 7;
	for(int j = 0;aver-j>=0;j++)
	{
		for (i = 0; i < 7; i++)
		{
			if (abs(aver-a[i]) ==  j)
			{
				printf("%d", i + 1);
				return 0;
			}
		}
	}
}