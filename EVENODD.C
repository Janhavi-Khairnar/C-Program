#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();

	printf("\nEnter any number :");
	scanf("%d",&i);

	if(i%2==0)
	{
	printf("\nGiven number is even.");
	}
	else
	{
	printf("\nGiven number is odd.");
	}

	getch();

}
