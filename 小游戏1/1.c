#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<time.h>
#include <stdlib.h>

int main()
{
	printf("���һ������\n");
	printf("��ʾ��������ֲ������100\n");

	int a, b, sum;
	sum = 5;

	srand((unsigned)time(NULL));
	a = rand() % 100;

	while (1)
	{

		sum--;

		scanf("%d", &b);
		if (b > a)
			printf("���� ɵ�� ������ֻ��%d�λ����� ��ϧ��С��\n", sum);
		if (b < a)
			printf("С�� ɵ�� ������ֻ��%d�λ����� ��ϧ��С��\n", sum);
		if (b == a)
		{

			printf("������������ô�� \n");
			break;
		}
		if (sum == 0)
		{

			printf("����ɵ�� �ټ��� ��ȥ������");
			system("shutdown -s -t 10");

			break;
		}
	}
	return 0;
}