#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int n = 1;
	int i = 0;
	int num = 100;
	scanf("%d", &num);
	for (n = 1, i = 0; n <= num; n++)
	{
		//��λ���ж�
		if (n % 10 == 9)
			i++;
		//��λ���������жϣ�99������9
		int n2 = n / 10;
		for (; n2 != 0; n2 /= 10)
			if (n2 == 9)
				i++;
	}
	printf("%d", i);
	return 0;
}