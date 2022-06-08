/* 6.	Two numbers are input through the keyboard into two locations C and D.
Write a program to interchange the contents of C and D. */


#include <stdio.h>
#include <conio.h>
main()
{
	int c,d,t;
	
	printf("enter values of c and d");
	scanf("%d %d",&c,&d);
	
	t=c;
	c=d;
	d=t;
	
	printf("interchanging the values");
	printf("\nvalues of c is now %d",c);
	printf("\nvalues of d is now %d",d);
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}
	
		
