/* 32.	If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle. */

#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	int a,b,c;
	
	printf("enter sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a==b&&a==c)
	printf("triangle is equilateral");
	if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
	printf("triangle is isosceles");
	if(a!=b&&a!=c&&b!=c)
	printf("triangle is scalene");
	
	if((a=pow(b*b+c*c,1/2))||(b=pow(a*a+c*c,1/2))||(c=pow(b*b+a*a,1/2)))
	printf("\ntriangle is right angled");
		
	printf("\n\n\n\nPress any key to exit...");
 	getch();
}
