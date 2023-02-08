//Using while loop addition of digits of armstrong number 
//Discription
//Armstrong number : is a number that is equal to the sum of cubes of its digit.
//ex.0,153,370,371,407.

#include<stdio.h>
int main()
{
	int i,sum=0,r,cube=0;
	printf("\nEnter the number :");
	scanf("%d",&i);
	
    while(i>0)
	{
	
		r=i%10;
		cube=r*r*r;
		printf("\nCube = %d",cube);
		sum=sum+cube;
		i=i/10;
	
	}
	printf("\nSum = %d",sum);
	
	return 0;
}



