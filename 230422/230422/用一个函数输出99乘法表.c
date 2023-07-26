#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print_haskell(int row, int col)
{
	int l, r;
	for (r = 1; r <= row; r++)
	{
		for (l = 1; l <= r; l++)
		{
			printf("%d * %d = %d\t", l, r, l * r);
		}
		printf("\n");
	}
}
int main(void)
 {
	int row, col;
	scanf("%d %d", &row, &col);
	print_haskell(row, col);
	return 0;
}