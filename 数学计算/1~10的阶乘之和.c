#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int n = 0;
	int i = 0;
	int rent = 1;
	int last = 2;
	//result
	int sum = 0;
	printf("Do you want to calculate the factorial of 1 to which number?\n");
	printf("Plase enter the number: ");
	scanf("%d", &last);
	for (n = 1; n <= last; n++)
	{
		//����ÿ�����Ľ׳�
		for (i = 1,rent = 1; i <= n; i++)
		{
			//ÿ���Ǻ�i����һ������ˣ�������Ҫ�ٽ���rent
			rent = rent * i;
		}
		sum += rent;
	}
	printf("The sum of factorials from 1 to %d is: %d", last,sum);
	return 0;
}