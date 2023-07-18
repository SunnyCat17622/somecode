#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int main(void)
{
	int t = 120;
	printf("您想电脑将在2000秒后关机\n");
	system("shutdown -s -t 2000");
	Sleep(2000);
	system("shutdown -a");
	printf("关机已在2秒后注销\n");
	return 0;
}