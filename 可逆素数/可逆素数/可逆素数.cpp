#include <stdio.h>

int nizhuan(int a)
{
	int n;
	n = a % 10 * 100 + a / 10 % 10 * 10 + a / 100;
	return n;
}

int prime(int a)
{
	int n = 1;
	if (a<2) {
		n = 0;
	}
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			n = 0;
			break;
		}
	}
	return n;
}

int main()
{
	int m, n;
	scanf_s("%d %d", &m, &n);
	for (int i = m; i <= n; i++) {
		if (prime(i) == 1 &&prime(nizhuan(i)) == 1 && i != nizhuan(i))
		{
				if (i < nizhuan(i)) {
					printf("%d\n", i);
				}
				
			}
		}
	return 0;
	}
	