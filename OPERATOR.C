#include<stdio.h>

int main()
{
       /* int a=1;  //we take here a=1 or 0
       

       printf("\nA=%d",a);
       a=-a;
       printf("\nA=%d",a);
       printf("\nA=%d",!a); //!a=completrementary statement(true/false)
		*/



    int a=20;
	int b=0;

	printf("\nA=%d\nB=%d",a,b);
	a=-a;
	printf("\nA=%d",a);
	printf("\nB=%d",b);

	a=++a;
	b=a;
	printf("\nA=%d",a);
	printf("\nB=%d",b);

	b=++a;
	a=b;
	printf("\nA=%d",a);
	printf("\nB=%d",b);

	b=a++;
	a=b;
	printf("\nA=%d",a);
	printf("\nB=%d",b);

	b=--a;
	a=b;
	printf("\nA=%d",a);
	printf("\nB=%d",b);

	b=a--;
	a=b;
	printf("\nA=%d",a);
	printf("\nB=%d",b);
	
	return 0;
}
