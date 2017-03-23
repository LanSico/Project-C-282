#include<stdio.h>
#include<conio.h>
main() {
	int  a, i;
	double b;
	a = 0;
	i = 1;
	while (a <= 100)
	{
		a = a + 2 ^ i;
		i++;
	}
	b = (a*0.8)/i;
	printf("平均每天%f元钱",b);
	getch();
}