//Function calling program

#include<stdio.h>
void add();
void sub();
int main()
{
	add();
	sub();
	return 0;
}

//1)First Function
void add()
{
	int a,b,c=0;
	printf("\nEnter the 2 number :");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\nAddition =%d",c);
}

//2)Second Function
void sub()	
{
	int a,b,c=0;
	printf("\nEnter the 2 number :");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("\nSubstraction =%d",c);
}