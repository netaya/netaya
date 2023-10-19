#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int reply;
	printf("一起拍电影吗  :>\n");
	printf("要很多精力吧  :<  (1/0）\n");
	scanf("%d", &reply);
	switch(reply)
	{
	case(1):printf("好！"); break;
	case(0):printf("好吧..."); break;
	default:printf("啊？"); break;
	}
	return 0;
}
