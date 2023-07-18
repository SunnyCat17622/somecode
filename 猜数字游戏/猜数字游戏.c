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
	//设置一个随机数，范围在1~100
	int num = rand()%100 + 1;
	int i = 0;
	printf("随机数已生成，范围在1~100。\n");
	for (i = 0; i != num;)
	{
		printf("请输入：");
		scanf("%d", &i);
		if (i < num)
			printf("猜小了\n");
		else if (i > num)
			printf("猜大了\n");
		else
		{
			printf("猜对了!\n");
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
			printf("游戏开始!\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入。\n");
			break;
		}
	} while (input);
	return 0;
}