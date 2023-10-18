#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	switch(a)
	{
	case 1:printf("yes.\n"); break;
	case 2:printf("no.\n"); break;
	default:printf("error.\n");

	}
	if (a == 1) { printf("yes.\n"); }
	else if (a == 2) { printf("no.\n"); }
	else { printf("error.\n"); }
	return 0;
}
