#include<stdio.h>
#include<conio.h>
double a, b;
int main() {
	printf("请输入正方形周长：");
	scanf("%lf",&a);
	b = 4.0 * a;
	printf("正方形周长是：%lf", b);
	return 0;
}