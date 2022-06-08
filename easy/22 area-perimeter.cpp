/* 22.	Given the length and breadth of a rectangle,
write a program to find whether the area of the 
rectangle is greater than its perimeter. 
For example, the area of the rectangle with 
length = 5 and breadth = 4 is greater than its perimeter. */

#include <stdio.h>
#include <conio.h>
main()
{
	int l,b,a,p;
	
	printf("enter length and breadth of rectangle");
	scanf("%d %d",&l,&b);
	
	p=2*(l+b);
	a=l*b;
	
	if(a>p)
	printf("area is greater than perimeter");
	else if (a==p)
	printf("area is equal to perimeter");
	else 
	printf("perimeter is greater then area");
	
	
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}
