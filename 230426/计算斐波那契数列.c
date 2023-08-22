#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main(void)
{
	int n = 0;
	printf("Which Fabonacci number are you want to figure out?\n");
	scanf("%d", &n);
	printf("%d", fib(n));
	return 0;
}