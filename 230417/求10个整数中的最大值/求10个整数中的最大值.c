#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int arr[10] = { 1,20,34,99,55,45,23,43,23,56 };
	int n = 0;
	int i = 1;
	for (n = 0, i = 1; i <= 10; i++)
	{
		if (arr[n] < arr[i])
			n = i;
	}
	printf("%d", arr[n]);
	return 0;
}