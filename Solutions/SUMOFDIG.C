/*write a program to enter any number and print sum of it's digit*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0;
	clrscr();
	printf("Enter number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum of digit is %d",sum);
	getch();
}
