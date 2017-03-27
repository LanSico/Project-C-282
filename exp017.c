#include<stdio.h>
#include<conio.h>
int leap(int a) {
	if (a % 4 == 0 && (a % 100 == 0 || a % 400 == 0))
		return 366;
	else
		return 365;
}

main() {
	int a, b, c, n, i;
	int d[13] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int e[13] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d %d %d", &a, &b, &c);
	a--;
	for (n = 0;a > 2011;a--)
		n = n+leap(a);
	if (leap(a) == 366)
	{
		for (;b > 1;b--)
			n = n + d[b];
		n = n + c;
	}
	else
	{
		for (;b >1;b--)
			n = n + e[b];
		n = n + c;
	}
	if (n % 3 > 0 && n % 3 < 4)
		printf("´òÓæ");
	else
		printf("É¹Íø");
	getch();
}