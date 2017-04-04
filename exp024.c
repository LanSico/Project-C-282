#include<stdio.h>
#include<conio.h>

void ch(int m, int n)
{
	int temp;
	temp = m;
	m = n;
	n = temp;
}

int comp(int a[], int b[], int c, int d,int e) {
	int i, j, k;
	i = c;
	j = d + 1;
	for (k = c;k <= e;k++)
	{
	if (i == d)
	{
		b[k] = a[j];
		j++;
	}
	else if (j == e)
	{
		b[k] = a[i];
		i++;
	}
	else if (a[i] > a[j])
	{
		b[k] = a[j];
		j++;
	}
	else
	{
		b[k] = a[i];
		i++;
	}
	}
}

main() {
	int s[10],r[10];
	int u, v, w,x;
	printf("请输入要排序的十个数：");
	scanf("%d %d %d %d %d %d %d %d %d %d", &s[0], &s[1], &s[2], &s[3], &s[4], &s[5], &s[6], &s[7], &s[8], &s[9]);
	for (x)
		comp(s, r, u, v, w);
}