#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main(void)
{
	int n = 0;
	char arr1[20] = "0";
	printf("���������뻺����ʾ��һ�仰��20���ַ����ڣ���");
	//scanf("%s", arr1);
	for (n = 0; scanf("%c", &arr1[n]) != EOF; n++);
	char arr2[20] = "0";
	int le = 0;
	le = strlen(arr1);
	//��arr2ȫ����ʼ��Ϊ*�����Ⱥ�arr1һ��
	for (n = 0; n < le; n++)
		arr2[n] = '*';
	int l = 0;
	int r = 0;
	//�����ַ����ĳ���һ��
	for (r = strlen(arr1) - 1; l <= r; l++, r--)
	{
		arr2[l] = arr1[l];
		arr2[r] = arr1[r];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
	}
	printf("%s\n", arr2);
	return 0;
}