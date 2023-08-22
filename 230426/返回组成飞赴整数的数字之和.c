#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int DigitSum(int i)
{
	if (i < 10)
		return i;
	else
		return DigitSum(i / 10) + (i % 10);
}
int main(void)
{
	int i = 0;
	printf("Enter a non-negative integer.\n");
	scanf("%d", &i);
	printf("The answer is %d", DigitSum(i));
	return 0;
}
