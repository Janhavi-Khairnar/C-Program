//Important from the point of view of interview
//Using these methods interchange the value of original numbers
  
#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter the value of a & b :");
	scanf("%d%d",&a,&b);
	
	printf("\nA=%d",a);
	printf("\nB=%d",b);
//1)First Method:	
	a=a+b;
	b=a-b;
	a=a-b;
//2)Second Method:
//	c=a;
//	a=b;
//	b=c;
	printf("\nA=%d",a);
	printf("\nB=%d",b);

	return 0;
}
