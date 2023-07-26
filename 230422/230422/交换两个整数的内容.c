#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void exchange(int* a, int* b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
int main(void)
{
	int a = 1;
	int b = 2;
	printf("%d %d\n", a, b);
	exchange(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}