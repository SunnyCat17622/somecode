#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void mune()
{
	printf("***************************\n");
	printf("***** 1.Play   0.Exit *****\n");
	printf("***************************\n");
}
void game()
{
	//����һ�����������Χ��1~100
	int num = rand()%100 + 1;
	int i = 0;
	printf("����������ɣ���Χ��1~100��\n");
	for (i = 0; i != num;)
	{
		printf("�����룺");
		scanf("%d", &i);
		if (i < num)
			printf("��С��\n");
		else if (i > num)
			printf("�´���\n");
		else
		{
			printf("�¶���!\n");
			Sleep(1000);
			break;
		}
	}

}
int main(void)
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		mune();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ!\n");
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("����������������롣\n");
			break;
		}
	} while (input);
	return 0;
}