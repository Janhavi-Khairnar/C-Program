//Using String Arrays find vowels

#include<stdio.h>
int main()
{
	char name[20];
	int n,count=0;
	
	printf("\nEnter the name :");
	scanf("%s",name);
	
	for(n=0;n<=19;n++)
	{
		printf("%c",name);
		if(name[n]=='a' || name[n]=='e' || name[n]=='i' || name[n]=='o' || name[n]=='u')
		{
			count++;
		}
		
	}
		printf("\n Vowels Count =%d",count);
		
	
	
	return 0;
}