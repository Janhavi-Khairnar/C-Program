//Fibonacci Series Practical

#include<stdio.h>
int main()
{
	int a=0,b=1,c=0,level,i;
	
	//level start from 1.This 1 is third number in series.
	printf("\nEnter the level number :");
	scanf("%d",&level);
	
	printf("\n%d\n%d",a,b);
	
	for(i=1;i<=level;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
	
	return 0;
	
}

//Level
//0
//1 =
//1 =0+1      ------first level
//2 =1+1      ------second level
//3 =1+2      ------third level      
//5           ------fourth level
//8           ------five level
//13          ------six level
//21          ------seven level
//34          ------eight level
//55          ------nine level
//89           -----ten level
//|
//|
//etc.
