#include<stdio.h>
#include<conio.h>

void shell(int v[], int n) {
	int i, j, gap, m, temp;
	for (gap = n / 2;gap >= 1;gap /= 2)
		for (i = gap;i <= n;i++)
			for (j = i;j >= 0;j -= gap)
			{
				m = j - gap;
				while (m >= 0)
				{
					if (v[m] > v[j])
					{
						temp = v[m];
						v[m] = v[i];
						v[i] = temp;
					}
					m -= gap;
				}
			}
}

main() {
	int a[10];
	int c;
	printf("请输入十个正整数：");
	scanf("%d d d d d d d d d d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
	shell(a, 9);
	for (c = 0;c <= 9;c++)
		printf("%d ", a[c]);
	getch();
}

