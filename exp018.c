#include<stdio.h>
#include<conio.h>
main() {
	int a, b, c, i, n;
	printf("请输入三条边长：");
	scanf("%d %d %d", &a, &b, &c);
	i = 0;
	n = 0;
	if ((a + b > c&&b + c > a&&a + c > b) != 1)
		printf("此三边无法组成三角形！！");
	else
	{
		if (a == b || b == c || a == c)
		{
			i = 1;
			if (a == b&a == c)
				printf("此三角形为等边三角形");
			else
				printf("此三角形为等腰三角形");
		}
		if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b))
		{
			n = 1;
			if (i == 1)
				printf("此三角形为等腰直角三角形");
			else
				printf("此三角形为直角三角形");
		}
	}
	if (n == 0 && i == 0)
		printf("此三角形为普通三角形");
	getch();

}