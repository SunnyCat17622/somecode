#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fa(int n)
{
	if (n == 1)
		return 1;
	else
		return n * fa(n - 1);
}
int main(void)
{
	int n = 0;
	int re = 0;
	int i = 0;
	printf("Which number do you want to calculate the factorial of?\n");
	scanf("%d", &n);
	printf("The factorial of %d is %d\n", n, fa(n));
	for (i = 1,re = 1; i <= n; i++)
		re *= i;
	printf("The factorial of %d is %d\n", n, re);
	return 0;
}