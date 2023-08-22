#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fun(int b, int p)
{
	if (p == 1)
		return b;
	else
	{
		return b * fun(b, p - 1);
	}
}
int main(void)
{
	int b = 1;
	int p = 1;
	printf("Determine what the base and power are.\n");
	scanf("%d %d", &b, &p);
	printf("The answer is %d.", fun(b, p));
	return 0;
}