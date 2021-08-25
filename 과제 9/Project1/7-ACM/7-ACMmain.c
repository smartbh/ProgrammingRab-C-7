#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
	// F(0) = 0 and F(1) = 1
	// 재귀 함수가 끝나는 종료조건
	if (n == 0 || n == 1)
		return n;
	// F(n) = F(n-1) + F(n-2)
	// 재귀 함수에서 재귀되는 부분
	else
		return fibonacci(n - 1) + fibonacci(n - 2);

	/* one line */
	// return (n == 0 || n == 1) ? n : fibonacci(n-1) + fibonacci(n-2);
}

int find_fibos(int n) {

	if (n == 1)
		return 1;
	else if (find_fibos(n) <= n)
	{

	}
	else if (find_fibos(n) == n)
		return find_fibos(n);
	else
		fibonacci(n);
}

void main()
{
	int ntest;
	int num;
	int i,j,z;
	long int a[10000] = { 0 };
	long int b[10000] = { 0 };
	a[0] = 0;
	a[1] = 1;
	a[2] = 1;

	for (i = 3; a[i-1] <= 1000000000; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}

	printf("%d\n", i);

	scanf("%d", &ntest);
	for (z = 0; z < ntest; z++)
	{
		j = 0;
		scanf("%d", &num);


		while (1) {
			for (i = 45; i >= 0; i--)
				if (num >= a[i])
					break;

			b[j] = a[i];

			if (a[i] == num)
				break;

			num -= a[i];
			j++;

		}
		for (i = j; i >=0; i--)
			printf("%d ", b[i]);
		printf("\n");
	}
}