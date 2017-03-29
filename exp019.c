#include<stdio.h>
#include<conio.h>
main() {
	int a[10], b[10] = {0};
	int i;
	printf("请输入十个正整数并用空格隔开：");
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
	for (i = 0;i <= 9;i++)
	{
		insort(b, a[i]);
		printf("%d %d %d %d %d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], b[8], b[9]);
	}
	printf("\n");
	for (i = 0;i <= 9;i++)
		printf("%d  ", b[i]);
	getch();
}

int insort(int s[], int n) {
	int t = 9;
	int c = 0;
	for (t = 9;t >= 0;t--)
	{
		if (n <= s[t])
			c = t;
	}
	t = 9;
		while (t > c)
	{
		s[t] = s[t - 1];
		t--;
	}
	s[c] = n;
	for(t=0;t<9;t++)
		if (s[t] > s[t + 1]&&s[t+1]!=0)
		{
			s[t] = s[t] + s[t + 1];
			s[t + 1] = s[t] - s[t + 1];
			s[t] = s[t] - s[t + 1];
		}
	return c;
}