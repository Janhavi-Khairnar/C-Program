//Find the Even number in given array

#include<stdio.h>
int main()
{
	int a[4],i;
	printf("\nEnter the 4 number :");
	
	for(i=0;i<=3;i++)
	{
		scanf("%d",&a[i]);
	}	
	
	printf("\nEven Number :");
	for(i=0;i<=3;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d",a[i]);
		}
	}
	
	return 0;
}