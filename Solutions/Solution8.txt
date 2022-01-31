#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	for(a=5; a>=0; a=a-2)
	{
		for(b=1; b<=a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}