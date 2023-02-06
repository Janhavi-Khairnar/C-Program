// *Menu Card for Cafe*

#include<stdio.h>
int main()
{
	int menu,qnt;
	float discount=0.0,bill=0.0,net_bill=0.0;
	
	//list of items available in cafe
	printf("***Menu***");
	printf("\n1.Milkshake\t30\n2.Ice Tea\t60\n3.Orange Juice\t40\n4.Exit");
	
	printf("\nEnter your menu number :");
	scanf("%d",&menu);
	
	if(menu>=1 && menu<=3)
	{
	printf("\nEnter Quantity :");
	scanf("%d",&qnt); 
    }
	
    
	 //Press number and give order
	if(menu==1)
	{
		printf("Your order Milkshake is received.\nPrice :Rs.30/-");
		bill=qnt*30;
	    printf("\nBill=Rs.%f",bill);
    }
	
		else if(menu==2)
	{
		printf("Your order Ice Tea is received.\nPrice :Rs.60/-");
		bill=qnt*60;
	    printf("\nBill=Rs.%f",bill);
    }
	
		else if(menu==3)
	{
		printf("Your order Orange Juice is received.\nPrice :Rs.40/-");
		bill=qnt*40;
	    printf("\nBill=Rs.%f",bill);
    }
	
		else if(menu==4)
	{
		printf("Exit!");
	}
		
	else 
	{
		printf("\nInvalid menu number.\nThank You!");
	}
	
	if(bill>=200)
	{
		printf("\nHurray!!!\nYou got 10 percent discount.");
	}
	
	discount=bill*0.10;
	{
		printf("\nDiscount=Rs.%f",discount);
	}
	
	
	net_bill=bill-discount;
	{
		printf("\nNet Bill :Rs.%f",net_bill);
	}
	
	return 0;
}
