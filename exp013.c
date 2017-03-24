#include<stdio.h>
#include<conio.h>
#include<math.h>
main() {
	int a, b, c;
	printf("请输入两个正整数，用逗号隔开：");
	scanf("%d,%d", &a, &b);
	c = pow(a,b);
	printf("%d的%d次方是%d", a, b, c);
	getch();
}