#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int reply;
	printf("һ���ĵ�Ӱ��  :>\n");
	printf("Ҫ�ܶྫ����  :<  (1\\0��\n");
	scanf("%d", &reply);
	switch (reply)
	{
	case(1):printf("�ã�");
		int line;
		line = 0;
		while (line < 2000)
		{
			line++;
			printf("����Ӱ��%d\h\n", line);
		}
		if (line == 2000);
		{printf("�ĵ�Ӱ�ɣ�"); }
		break;
	case(0):printf("�ð�..."); break;
	default:printf("����"); break;
	}

	return 0;
}