 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	//左边的数
	int l = 1;
	//右边的数
	int r = 1;
	for (r = 1; r <= 9; r++)
	{
		for (l = 1; l <= r; l++)
			printf("%d * %d = %d\t", l, r, l * r);
		printf("\n");
	}
	return 0;
}