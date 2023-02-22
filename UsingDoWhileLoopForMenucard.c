#include<stdio.h>
int main()
{
	char confirm;
	int menu,qnt;
	float bill,discount,net_bill;
	
	
	do
	{
	printf("\n***Menu***");
	printf("\n1.Ice Cake\tRs.250\n2.Cold Coffee\tRs.150\n3.Pestrii\tRs.20\n4.Exit.");
	
	printf("\nEnter your order number :");
	scanf("%d",&menu);
	
	
	if(menu>=1 && menu<=3)
	{
	printf("\nEnter quantity :");
	scanf("%d",&qnt);
    }
	
	
	//Using Switch condition
	switch(menu)
	{
		case 1:
			printf("\nYour order Ice Cake is received.");
			bill=qnt*250;
			printf("\nBill=Rs.%f",bill);
		break;
		case 2:
			printf("\nYour order Cold Coffee is received.");
			bill=qnt*150;
			printf("\nBill=Rs.%f",bill);
		break;
		case 3:
			printf("\nYour order Pestrii is received.");
			bill=qnt*20;
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
	
	printf("\nDo you have anymore else ?(yes=y,no=n) : ");
	scanf("%s",&confirm);
	}
	while(confirm == 'y');


	return 0;
}

