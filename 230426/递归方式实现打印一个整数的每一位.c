#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int n)
{
    if (n > 9)
        print(n / 10);
    printf("%d ", n % 10);
}
int main(void)
{
	int it = 0;
	scanf("%d", &it);
	print(it);
	return 0;
}