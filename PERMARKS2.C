//Marks & Percentage of 5 subjects

#include<stdio.h>
int main()
{
	int math,eng,phy,bio,marathi,total_marks;
	float per;

	printf("\nenter the marks of math :");
	scanf("%d" ,&math);

	printf("\nenter the marks of eng :");
	scanf("%d" ,&eng);

	printf("\nenter the marks of phy :");
	scanf("%d" ,&phy);

	printf("\nenter the marks of bio :");
	scanf("%d" ,&bio);

	printf("\nenter the marks of marathi :");
	scanf("%d" ,&marathi);

	total_marks = math+eng+phy+bio+marathi;

	printf("\ntotal_marks=%d",total_marks);

	per=(float)total_marks/5;

	printf("\nper=%f",per);
	 
	 
	if(per>=35 && per<55)
	{
		printf("\nStudent get D grade.");
	}
	else if(per>=55 && per<65);
	{
	    printf("\nStudent get C grade.");	
	}
	else if(per>=65 && per<80);
	{
	    printf("\nStudent get B grade.");	
	}
	else if(per>=80 && per<90);
	{
	    printf("\nStudent get A grade.");	
	}
	else if(per>=90 && per<=100);
	{
	    printf("\nStudent get A+ grade.");	
	}	
	else
	{
		printf("\nStudent is failed.");
	}
	 return 0;
}