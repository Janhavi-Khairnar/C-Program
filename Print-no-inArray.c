//Different Methods to use "Array"//

#include<stdio.h>
int main()
{
//	1) First Method to use "Array" :	
//	int a[6]={10,20,30,40,50,60};

//  2) Second Method to use "Array" :
//	int a[6];
//	a[0]=10,a[1]=20,a[2]=30,a[3]=40,a[4]=50,a[5]=60;

//	printf("\n%d",a[0]);
//	printf("\n%d",a[1]);
//	printf("\n%d",a[2]);
//	printf("\n%d",a[3]);
//	printf("\n%d",a[4]);	
//	printf("\n%d",a[5]);

//	sum=a[0]+a[1]+a[2]+a[3]+a[4]+a[5];             
//	printf("\nSum of 6 numbers : %d",sum);
	
	
//	3) Third Method to use "Array"  :
// 	int a[6];
//	printf("\nEnter the 6 numbers :");	

//	scanf("%d",&a[0]);
//	scanf("%d",&a[1]);
//	scanf("%d",&a[2]);
//	scanf("%d",&a[3]);
//	scanf("%d",&a[4]);
//	scanf("%d",&a[5]);
//	
//	printf("\n Number of Arrays : ");
//	printf("\n%d",a[0]);
//	printf("\n%d",a[1]);
//	printf("\n%d",a[2]);
//	printf("\n%d",a[3]);
//	printf("\n%d",a[4]);
//	printf("\n%d",a[5]);

//	sum=a[0]+a[1]+a[2]+a[3]+a[4]+a[5];             
//	printf("\nSum of 6 numbers : %d",sum);
	
	

	
//	4)Using for loop, for "Array" :
	int a[6],i,sum=0;
	printf("\nEnter the 6 numbers :");	

	for(i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
    
	printf("\nNumber of Arrays : ");
	for(i=0;i<=5;i++)
	{
		printf("\n%d",a[i]);
		sum=sum+a[i];
	}
		printf("\nSum = %d",sum);

	return 0;
	
}