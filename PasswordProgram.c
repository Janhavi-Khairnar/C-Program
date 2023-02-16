//Make a strong password using string arrays

#include<stdio.h>
int main()
{
	char password[20];
	int i,capital=0,small=0,digit=0,length=0;
	
	printf("\nEnter the password :");
	scanf("%s",&password);
	
	for(i=0;i<=19;i++)
	{
		if(password[i]=='\0')
		{
			break;
		}
		if(password[i]>=65 && password[i]<=90)
		{
			capital++;
		}
		if(password[i]>=92 && password[i]<=117)
		{
			small++;
		}
		if(password[i]>='0' && password[i]<='9')
		{
			digit++;
		}
		length++;
	}
	
	if(length>=8 && capital>=1 && small>=1 && digit>=1)
	{
		printf("\nCorrect Password.");
	}
	else
	{
		printf("\nIncorrect Password.");
	}
	
	printf("\nUse (0-9),(a-z) & (A-Z) for a strong password.");
	return 0;
}


//	a to z 
//	ASCII Value- 92 to 117
//
//	A to Z 
//	ASCII Value- 65 to 90
//
//	ASCII-American Standard Code For Information Interchange