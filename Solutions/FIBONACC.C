#include<stdio.h>
#include<conio.h>
void main()
{
	int n1=0,n2=1,n3,i,number;
	clrscr();
	printf("Enter the number of element:");
	scanf("%d",&number);
	printf("\n %d%d",n1,n2);
	for(i=2;i<number;i++)  //loop start from 2 beacuse 0 & 1 already printed//
	{
		n3=n1+n2;
		printf("%d",n3);
		n1=n2;
		n2=n3;
	}
	getch();
}