#include<stdio.h>
#include<conio.h>

void qusort(int s[], int start, int end) {
	int i, j, n;
	i = start;
	j = end;
	n = s[start];
	while (i < j)
	{
		while (i < j&&n < s[j])
			j--;
		if (i < j)
		{
			s[i] = s[j];
			i++;
		}
		while (i < j&&s[i] <= n)
			i++;
		if (i < j)
		{
			s[j] = s[i];
			j--;
		}
	}
	s[i] = n;
	if (start < i)
		qusort(s, start, j - 1);
	if (i < end)
		qusort(s, j + 1, end);
}

main() {
	int a[10],m;
	printf("请输入要排序的十个数字：");
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
	qusort(a, 0, 9);
	for (m = 0;m < +9;m++)
		printf("%d ", a[m]);
	getch();
}