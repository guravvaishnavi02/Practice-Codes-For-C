/* 5.	The length & breadth of a rectangle and 
radius of a circle are input through the keyboard.
Write a program to calculate the area & perimeter of the rectangle, 
and the area & circumference of the circle. */

#include <stdio.h>
#include <conio.h>
main()
{
	float l,b,r,a,lb,p,c;
	
	printf("enter length and breadth of rectangle.");
	scanf("%f %f",&l,&b);
	
	lb=l*b;
	p=2*(l+b);
	printf("area of rectangle is %.3f",lb);
	printf("\nperimeter of rectangle is %.3f",p);
	
	
	printf("\n\nenter radius of cirlce");
	scanf("%f",&r);
	
	a=3.14*r*r;
	c=2*3.14*r;
	printf("\narea of circle is %.3f",a);
	printf("\ncircumference of circle is %.3f",c);
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
	
}
