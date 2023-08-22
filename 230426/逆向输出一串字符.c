#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void fun(char arr[])
{
	if (*arr != 0)
	{
		fun(arr + 1);
	}
	printf("%c", *arr);
}
int main(void)
{
	char arr[] = "abcdef";
	fun(arr);
}