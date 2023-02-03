// To get salary after paying tax

#include<stdio.h>

int main()
{
	int wages,tax_amount;
	float salary,fsalary;

	printf("\n Enter the wages :");
	scanf("%d",&wages);

	salary = wages * 30;
	printf("\nwages = %f",salary);

	tax_amount = 12*salary/100;
	printf("\ntax_amount = %d",tax_amount);

	fsalary = salary -tax_amount;
	printf("\nfsalary = %f",fsalary);

	return 0;
}
