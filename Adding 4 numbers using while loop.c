//Using "While Loop" for adding digits of a number

#include<stdio.h>
int main()
{
	int n,sum=0,r;
	
	printf("\nEnter an integer :");
	scanf("%d",&n);
	

	while(n>0)
	 {	
	 	r=n%10;
		sum=sum+r;
		n=n/10;                  
	 }	
	  
	printf("Sum of digit  = %d\n",sum);          
	 
	return 0;
}
