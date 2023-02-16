//Search the number in given array

#include<stdio.h>
int main()
{
	int a[7],i,x,low=0,high=3,mid=0,flag=-1;
	
	printf("\nEnter the numbers in Arrays :");
	for(i=0;i<=6;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the number to search :");
	scanf("%d",&x);
	
	for(i=0;i<=6;i++)
	{
//		printf("\nIteration Done.");
		mid = (low+high)/2;
		
		if(x == a[mid])
		{
			flag = mid;
			break;
		}
		
		if(x > a[mid])
		{
			low = mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	
	if(flag == -1)
	{
		printf("\nNumber is not present in array.");
	}
	else
	{
		printf("\nNumber is present in array at location %d.",flag);
	}
	
	
	
	return 0;
}