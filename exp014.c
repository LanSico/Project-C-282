#include<stdio.h>
#include<conio.h>
#include<math.h>
main() {
	int a, b, c,sum;
	int d[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int e[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("�����������ղ��ÿո������");
	scanf("%d %d %d", &a, &b, &c);
	b--;
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
	{
		for (sum = 0;b >= 0;b--)
			sum = sum + d[b];
		sum = sum + c;
	}
	else
	{
		for (sum = 0;b >= 0;b--)
			sum = sum + e[b];
		sum = sum + c;
	}
	printf("�����Ǹ���ĵ�%d��", sum);
	getch();
}