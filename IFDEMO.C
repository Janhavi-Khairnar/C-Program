#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;

	clrscr();

	printf("\nEnter two numbers :");
	scanf("%d%d",&a,&b);

	if(a>b)
	{
	printf("\nA is greater.");
	}
	else
	{
	printf("\nB is gerater.");
	}

	getch();
}
