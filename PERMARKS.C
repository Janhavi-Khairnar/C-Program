#include<stdio.h>
#include<conio.h>
void main()
{
	int math,eng,phy,bio,marathi,total_marks;
	float per;
	clrscr();
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

	printf("\ntotal_marks=%d" ,total_marks);

	 per=(float)total_marks/5;

	 printf("\nper=%f",per);

	 getch();
}