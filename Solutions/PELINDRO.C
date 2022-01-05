#include<stdio.h>
#include<conio.h>
void main()
{
	int no,r=0,rem,n;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&no);
	n=no;
	while(no!=0)
	{
		rem=no%10;
		r=r*10+rem;
		no=no/10;
	}
	if(n==r)
	{
		printf("\n %d is pelindroen number",n);
	}
	else
	{
		printf("\n %d is not pelindroen number",n);
	}
	getch();
}