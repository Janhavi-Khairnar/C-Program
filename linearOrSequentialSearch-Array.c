//1) Using Linear or Sequential Method find number present or not in given arrays

#include<stdio.h>
int main()
{
	int a[4],i,x,flag=-1;
	
	printf("\nThe Array Number are :");
	for(i=0;i<=3;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the number to search  from array :");
	scanf("%d",&x);


	for(i=0;i<=3;i++)
	{
		if(x == a[i])
		{
			flag = i;
			break;
		}
	}
	
	if(flag==-1)
	{
		printf("\nNumber is not present in array.");
	}
	else
	{
		printf("\nNumber is  present in array at location %d .",flag);
	}

	return 0;
}
