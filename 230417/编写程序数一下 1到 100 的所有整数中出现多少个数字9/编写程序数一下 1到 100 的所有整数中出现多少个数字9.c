#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int n = 1;
	int i = 0;
	int num = 100;
	scanf("%d", &num);
	for (n = 1, i = 0; n <= num; n++)
	{
		//个位数判断
		if (n % 10 == 9)
			i++;
		//两位数及以上判断，99是两个9
		int n2 = n / 10;
		for (; n2 != 0; n2 /= 10)
			if (n2 == 9)
				i++;
	}
	printf("%d", i);
	return 0;
}