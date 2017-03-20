#include<stdio.h>
#include<conio.h>
int a, b, sum;
int main() {
	printf("请输入要求和的两个整数，并用半角逗号隔开：");
	scanf("%d,%d", &a, &b);
	sum = a + b;
	printf("sum=%d", sum);
	getch();
	return 0;
}