#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Compare(int n, int i)
{
	if (n > i)
		return n;
	return i;
}
int main(void)
{
	int n1 = 0;
	int n2 = 0;
	printf("����������������");
	scanf("%d %d", &n1, &n2);
	printf("�ϴ����Ϊ%d",Compare(n1, n2));
	return 0;
}
