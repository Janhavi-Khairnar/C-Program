//Using Relational(Conditional) Operator Check The Numbers


#include<stdio.h>
int main()
{	
 	//Varibales
	int A,B,C;
	
	//Enter the numbers
	printf("\nEnter first number(A) :");
	scanf("%d",&A);

	printf("\nEnter second number(B) :");
	scanf("%d",&B);

	printf("\nEnter third number(C) :");
	scanf("%d",&C);

	//Appling "If-Else Condition"
	if(A>B)
	{
		if(A>C)
	{
			printf("\nA is greater than other two numbers.");
	}
		else
	{
		printf("\nC is greater than other two numbers.");
	}
	}
	
	else
	{
		if(B>C)
	{
		printf("\nB is greater than other two numbers");	
    }
    	else
    {
    		printf("\nC is greater than other two numbers.");
	}
	}

		
		return 0;
}