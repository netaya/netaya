#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int reply;
	printf("一起拍电影吗  :>\n");
	printf("要很多精力吧  :<  (1\\0）\n");
	scanf("%d", &reply);
	switch (reply)
	{
	case(1):printf("好！");
		int line;
		line = 0;
		while (line < 2000)
		{
			line++;
			printf("看电影：%d\h\n", line);
		}
		if (line == 2000);
		{printf("拍电影吧！"); }
		break;
	case(0):printf("好吧..."); break;
	default:printf("啊？"); break;
	}

	return 0;
}