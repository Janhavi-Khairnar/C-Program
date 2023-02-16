#include<stdio.h>
int main()
{

	char name[10];  						
//  char name[6]={'A','P','P','L','E'};
	int i,count=0;
	
	printf("\nEnter the name :");
	scanf("%s",name);
	
	for(i=0;i<=9;i++)
	{
		printf("%c",name[i]);
		if(name[i]=='\0')
		{
			break;
		}
		count++;
	}
	printf("\nCount = %d",count);
	
	
	

	
	
//	char name[8]="Janhavi";
//	int i;
//	
//	printf("\nEnter your name :");
//	scanf("%s",&name);
//	
//	printf("%s",name);
//	return 0;
}