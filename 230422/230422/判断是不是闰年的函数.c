#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int is_leap_year(int year)
{
	return ((year % 4 == 0 && year % 100 == 0) || year % 400 == 0);
}
int main(void)
{
	int year;
	scanf("%d", &year);
	if (is_leap_year(year))
		printf("It is a leap year.\n");
	else
		printf("It isn't a leap year.\n");
	return 0;
}