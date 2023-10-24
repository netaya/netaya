#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	a = 6;
	
	while (1)
	{
		scanf("%d", &b);
		if (b == a)
		{
			printf("完成\n");
			break;
		}
		else

		{
			printf("未完成\n");
			break;
		}


	}

	return 0;
}
