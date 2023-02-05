

#include<stdio.h>
int main()
{
	int menu,qyt;
	float bill,discount,net_bill;
	
	printf("***Menu***");
	printf("\n1.Ice Cake\tRs.250\n2.Cold Coffee\tRs.150\n3.Pestrii\tRs.20\n4.Exit.");
	
	printf("\nEnter your order number :");
	scanf("%d",&menu);
	
	
	if(menu>=1 && menu<=3)
	{
	printf("\nEnter quantity :");
	scanf("%d",&qyt);
    }
	
	switch(menu)
	{
		case 1:
			printf("\nYour order Ice Cake is received.");
			bill=qyt*250;
			printf("\nBill=Rs.%f",bill);
		break;
		case 2:
			printf("\nYour order Cold Coffee is received.");
			bill=qyt*150;
			printf("\nBill=Rs.%f",bill);
		break;
		case 3:
			printf("\nYour order Pestrii is received.");
			bill=qyt*20;
			printf("\nBill=Rs.%f",bill);
			break;
		case 4:
		    printf("\nThanks For Visit!\nBye Bye!");		
        break; 
	
		default:
			printf("\nOrder number does not match.");
		break;
    }
  	
  	if(bill>=200)
  	
	  
	{
	printf("\nHurray!!!\nYou got 10 percent discount.");
	
	discount=bill*0.10;
	printf("\nDiscount=Rs.%f",discount);
	
	net_bill=bill-discount;
	printf("\nNet Bill :Rs.%f",net_bill);
    }
    
    else
    {
    printf("\nSorry,you are not applicable for discount!");
	}
    
	
	
	return 0;
}