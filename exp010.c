#include<stdio.h>
#include<conio.h>
int a[3],i,n,t;
int min(int m, int n) {
	if (m <= n)
		return m;
	else
		return n;
}

int main() {
	printf("������Ҫ��С�������е������������ö��Ÿ�����");
	scanf("%d,%d,%d", &a[0], &a[1], &a[2]);
	i = 0;
	n = 0;
	while (i <= 2)
	{
		while (n < 2)
		{
			n = n + 1;
			if (a[i] > a[n])
			{
				t = a[i];
				a[i] = a[n];
				a[n] = t;
			}
		}
		i++;
		n =i;
	}
	printf("��������Ϊ��%d,%d,%d", a[0], a[1], a[2]);
	getch();
	return 0;
}