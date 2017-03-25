#include<stdio.h>
#include<conio.h>
main() { 
	int a, b, c;
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			for (c = 1;c <= 3;c++)
			if (a != 1 && c != 1 && c != 3&a!=b&&b!=c&&c!=a)
			{
				printf("A的新娘为%d\n", a);
				printf("B的新娘为%d\n", b);
				printf("C的新娘为%d\n", c);
			}
	getch();
}