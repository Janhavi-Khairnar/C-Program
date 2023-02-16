//Find The Largest Number in Given Array

#include<stdio.h>
int main()
{
	int size,i,largest,location=0;
	
	printf("\nEnter the size of number :");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter the elements of the array :",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	largest=a[0];
	for(i=0;i<size;i++)
	{
		if(largest<a[i])
		{
			largest=a[i];
			location=i;
		}
	}
	printf("\nLargest element present in the given array = %d",largest);
	printf("\nLocation  = %d",location);
	
	
	return 0;
}




		