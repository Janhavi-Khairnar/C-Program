//***Calculater***

#include<stdio.h>
int main()
{
	char operator;
	float a,b,result=0.0;
	
	
	//Print name
	printf("***Calculator***\nOperators");
	printf("\n1.+\n2.-\n3.*\n4./");
	
	
    printf("\nEnter operator :");
	scanf("%c",&operator);
	
	// Print symbols and operators
	if(operator=='+' || operator=='-' ||operator=='*' || operator=='/') 
	{
	printf("\nEnter the first number(a) :");
	scanf("%f",&a);
	
	printf("\nEnter the second number(b) :");
	scanf("%f",&b);
    }
	
	//Using the switch function find out the answer.
	switch(operator)
	{
      case '+':
      	printf("\nYou are adding the two number.");
      	result=a+b;
      	printf("\nResult =%f",result);
      	break;
	  case '-':
	    printf("\nYou are substracting the two number.");
	    result=a-b;
      	printf("\nResult =%f",result);
		break;		
	  case '*':
	    printf("\nYou are multipling the two number.");
	    result=a*b;
      	printf("\nResult =%f",result);
	    break;
	  case '/':
	    printf("\nYou are dividing the two number."); 	
	    result=a/b;
      	printf("\nResult =%f",result);
		break;	
		
	  default:
	    printf("\nThis is not operator.So,no operation will perform."); 	
	}
	
	
	
	return 0;
}