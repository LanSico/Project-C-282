#include<stdio.h>
#include<conio.h>
int a, n;
int main() {
	n = 1;
	printf("������Ҫ�׳˵����֣�");
	scanf("%d", &a);
	while (a >= 1){
		n = n*a;
		a--;
	}
	printf("���Ľ׳��ǣ�%d", n);
	getch();
	return 0;
}