//Find even numbers in given input 

#include<stdio.h>
int main()
{
	int a[3],i;
	printf("\nEnter the 3 numbers :");	

	for(i=0;i<=2;i++)
	{
		scanf("%d",&a[i]);
	}
    
	printf("\nEven Number :");
	
	for(i=0;i<=2;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d",a[i]);
    	}
    
	}
	
//	printf("\nOdd Number :");
//	for(i=0;i<=2;i++)
//	{
//		if(a[i]%2!=0)
//		{
//			printf("\n%d",a[i]);
//  	}
//		
//	}
	return 0;
}

