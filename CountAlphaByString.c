//Counting of letters & vowels given by user using string array

#include<stdio.h>
int main()
{
	char name[20],x;
	int n,count1=0,count2=0,vowels=0;
	
	printf("\nEnter the name :");
	scanf("%s",name);
	
	printf("\nEnter the letter you want :");
	scanf("%s",&x);
	
	for(n=0;n<=19;n++)
	{
		printf("%c",name);
		if(name[n]==x)
		{	
			count1++;
		}
		
		
		if(name[n]=='a' || name[n]=='e' || name[n]=='i' || name[n]=='o' || name[n]=='u' || name[n]=='A' || name[n]=='E' || name[n]=='I' || name[n]=='O' || name[n]=='U')
		{
			count2++;
			printf("\n%c",name);
		}
		vowels++;
	}
	    printf("\nCounting of letter given by user :%d",count1);
	    
	    printf("\nPresent Vowels =%d",count2);
		
	    
    return 0;
}