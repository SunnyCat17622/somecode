#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
int main(void)
{
	float n = 1.0;
	float i = 1.0;
	float sum = 0;
	for (n = 1,i = 1; n <= 100; n++, i *= -1)
	{
		sum += (1.0 * i) / n;
	}
	printf("%f", sum);
	return 0;
}