#include<stdio.h>
#include<conio.h>
main() {
	int a, b, c, i, n;
	printf("�����������߳���");
	scanf("%d %d %d", &a, &b, &c);
	i = 0;
	n = 0;
	if ((a + b > c&&b + c > a&&a + c > b) != 1)
		printf("�������޷���������Σ���");
	else
	{
		if (a == b || b == c || a == c)
		{
			i = 1;
			if (a == b&a == c)
				printf("��������Ϊ�ȱ�������");
			else
				printf("��������Ϊ����������");
		}
		if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b))
		{
			n = 1;
			if (i == 1)
				printf("��������Ϊ����ֱ��������");
			else
				printf("��������Ϊֱ��������");
		}
	}
	if (n == 0 && i == 0)
		printf("��������Ϊ��ͨ������");
	getch();

}