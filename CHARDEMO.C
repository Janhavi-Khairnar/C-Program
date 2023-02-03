#include<stdio.h>
#include<conio.h>
void main()
{
	//char gender='m';
	char gender;
	clrscr();
	printf("\nEnter your Gender (m-male/f-female):");
	scanf("%c",&gender);
	printf("\nGender=%c",gender);
	if(gender=='m')
	{
		printf("\nYour Gender is Male");
	}
	else
	{
		printf("\nYour Gender is Female");
	}
	getch();
}