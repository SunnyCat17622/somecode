#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int main(void)
{
	int t = 120;
	printf("������Խ���2000���ػ�\n");
	system("shutdown -s -t 2000");
	Sleep(2000);
	system("shutdown -a");
	printf("�ػ�����2���ע��\n");
	return 0;
}