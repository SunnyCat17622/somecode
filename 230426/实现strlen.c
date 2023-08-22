#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(char* arr)
{
	static int cout = 0;
	if (*arr != 0)
	{
		cout++;
		my_strlen(arr + 1);
	}
	return cout;
}
int main(void)
{
	int cout = 0;
	char arr[] = "abcdef";
	printf("The leth is %d\n", my_strlen(arr));
	char* arr2 = arr;
	for (cout = 0; *arr2 != 0; cout++, arr2++);
	printf("The leth is %d\n",cout);
	return 0;
}