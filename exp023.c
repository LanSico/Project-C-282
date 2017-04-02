#include<stdio.h>
#include<conio.h>
main() {
	int a[10], i, j,t;
	printf("请输入要排列的十个数，将进行冒泡排列：");
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
	for(i=0;i<=9;i++)
		for(j=0;j<=8;j++)
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	for (i = 0;i <= 9;i++)
		printf("%d ", a[i]);
	getch();

}