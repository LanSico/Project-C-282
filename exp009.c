#include<stdio.h>
#include<conio.h>
int a, n;
int main() {
	n = 1;
	printf("请输入要阶乘的数字：");
	scanf("%d", &a);
	while (a >= 1){
		n = n*a;
		a--;
	}
	printf("他的阶乘是：%d", n);
	getch();
	return 0;
}