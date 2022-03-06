/* 21.	Find the absolute value of a number entered through the keyboard. */

#include <stdio.h>
#include <conio.h>
main()
{
	int a,b;
	
	printf("enter a number");
	scanf("%d",&a);
	
	if(a<0)
	b=-a;
	else
	b=a;
	
	printf("absolute value of number is %d",b);
	
	
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}
