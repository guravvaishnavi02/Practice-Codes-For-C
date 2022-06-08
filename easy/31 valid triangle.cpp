/* 31.	If the three sides of a triangle are entered through the keyboard,
 write a program to check whether the triangle is valid or not. 
The triangle is valid if the sum of two sides is greater 
than the largest of the three sides. */

#include <stdio.h>
#include <conio.h>
main()
{
	int a,b,c,i,j;
	
	printf("enter sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{ 
			i=a;
			j=b+c;
		}
		
		else
		{
			i=c;
			j=a+b;
		}
		
	}
	else 
	{ 	
		if(b>c)
		{
			i=b;
			j=a+c;
		}
		
		else 
		{
			i=c;
			j=a+b;
		}
		
	}
	
	if(i>j)
	printf("triangle is valid");
	else
	printf("triangle is not valid");
		
	printf("\n\n\n\n Press any key to exit...");
 	getch();
}
