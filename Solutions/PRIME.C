/*write a program to enter any number and check it is a prime or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("\n Enter the number to check it prime or not");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0);
		{
			printf("%d is not prime number",n);
			break;
		}
	}
		if(i==n)
		printf("\n %d is prime number",n);
		getch();
}









