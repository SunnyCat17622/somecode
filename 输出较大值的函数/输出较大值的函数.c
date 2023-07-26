#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int ret_bigger(int a, int b)
{
	return a > b ? a : b;
 }
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n",ret_bigger(a, b));
	return 0;
 }

void test()
{
	printf("hello, world!");
}