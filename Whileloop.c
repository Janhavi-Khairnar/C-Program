//Using the while loop for reversing the number
//Discription
//Palindrome Number : is a number that remains same when its digits are reversed.
//ex. 121,11,151,656,etc.

#include<stdio.h>
int main()
{
	int n,r,t,sum=0;
    printf("\nEnter the number :");
	scanf("%d",&n);
	
	t=n;
	while(n>0)
	{	
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
		printf("%d",sum);
			
	if(t==sum)
	{
		printf("\nGiven number is palindrom.");
	}
	else
	{
		printf("\nGiven number is not palindrom.");
	}
	return 0;
}

