#include<stdio.h>
#include<stdio.h>
main() {
	int a,i;
	i = 0;
	a = 1;
	while (i <= 9)
	{
		a = (a + 1) * 2;
		i++;
	}	
	printf("猴子总共有桃子%d个", a);
	getch();
}