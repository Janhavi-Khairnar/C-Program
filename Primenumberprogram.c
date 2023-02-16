//Find the given number is prime or not.

#include<stdio.h>
int main()
{
	int i,n,flag=1;
	
	printf("\nEnter the number :");
	scanf("%d",&n);
	
	if(n==1)
	{
		flag=1;
	}

	else
	{
		for(i=2 ; i<=n-1; i++)
		{
			printf("\n n=%d \t i=%d",n,i);
			if(n%i == 0)
			{
				flag=0;
				break;
			}
		}
	}
	
	if(flag==1)
	{
		printf("\nNumber is  prime.");
	}
	else
	{
		printf("\nNumber is not prime.");
	}
	
	return 0;
}