/*  20.	Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the keyboard. 
A triangle is valid if the sum of all the three angles is equal to 180 degrees. */

#include <stdio.h>
#include <conio.h>
main()
{
	int a,b,c,d;
	
	printf("enter angles of triangle in degrees");
	scanf("%d %d %d",&a,&b,&c);
	
	d=a+b+c;
	
	if(d==180)
	printf("triangle is valid");
	else 
	printf("triangle is not valid");

	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}
