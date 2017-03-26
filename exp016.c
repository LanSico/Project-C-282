#include<stdio.h>
#include<conio.h>
main() {
	int a, b, c;
	for (a = 0;a <= 20;a++)
		for (b = 0;b <= 33;b++)
			for (c = 3;c <= 100;c++)
				if (a * 5 + b*3+ c / 3 == 100 && a+b+c==100 && c%3==0)
					printf("¹«¼¦%d,Ä¸¼¦%d,Ð¡¼¦%d\n", a, b, c);
	getch();
}