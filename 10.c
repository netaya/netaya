#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int reply;
	printf("һ���ĵ�Ӱ��  :>\n");
	printf("Ҫ�ܶྫ����  :<  (1/0��\n");
	scanf("%d", &reply);
	switch(reply)
	{
	case(1):printf("�ã�"); break;
	case(0):printf("�ð�..."); break;
	default:printf("����"); break;
	}
	return 0;
}
