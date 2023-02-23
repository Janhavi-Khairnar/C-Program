//Using differnt types of String Function check the user name and password

#include<stdio.h> 
#include<string.h>
int main()
{
	char name1[6],pw1[10],name2[6]="Admin",pw2[10]="Admin1234";
	int length=0,cmp1,cmp2;
	
	printf("\nEnter user name :");
	scanf("%s",&name1);
	
	printf("\nEnter Password :");
	scanf("%s",&pw1);
	
	//Check password's length using string length function
	length=strlen(pw1);
	printf("\nLength=%d",length);
	
	//Compared name1 and name2 using string comparison function
	cmp1=strcmp(name1,name2);
	printf("\nComparison1 =%d",cmp1);
	
	if(cmp1==0)
	{
		printf("\nCorrect user name.");
	}
	else
	{
		printf("\nEnter valid user name.");
	}
	
	//Compared pw1 and pw2 using string comparison function
	cmp2=strcmp(pw1,pw2);
	printf("\nComparison2 :%d",cmp2);
	if(cmp2==0)
	{
		printf("\nValid Password.");
	}
	else
	{
		printf("\nEnter valid password.");
	}
	
	return 0;
}