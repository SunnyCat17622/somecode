#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int arr[20];
	int n = 0;
	int i = 0;
	int k = 13;
	for (n = 1, i = 0; n <= 20; n++, i++)
		arr[i] = n;
	int l = 0;
	int r = 0;
	int mid = 0;
	r = sizeof(arr)/sizeof(arr[0]) - 1;
	for (mid = (l + r)/2; arr[l] != arr[r]; mid = (l + r) / 2)
	{
		if (arr[mid] < k)
			l = mid;
		else if (arr[mid] > k)
			r = mid;
		else if (arr[mid] == k)
			break;
	}
	if (arr[mid] == k)
		printf("找到了，下标是%d", mid);
	else
		printf("没找到");
	return 0;
}