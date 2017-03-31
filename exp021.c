#include<stdio.h>
#include<conio.h>
main() {
	int a[10];
	int i, n,temp;
	printf("请输入要排序的十个正整数：");
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
	for(i=0;i<+9;i++)
		for(n=i;n<=9;n++)
			if (a[i] > a[n])
			{
				temp = a[i];
				a[i] = a[n];
				a[n] = temp;
			}
	printf("%d %d %d %d %d %d %d %d %d %d", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
	getch();
}