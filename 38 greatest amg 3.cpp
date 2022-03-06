/* 38.	Write a program to find the greatest of the three
numbers entered through the keyboard using conditional operators.*/
#include <stdio.h>
#include <conio.h>
main()
{
	int a,b,c;
	
	printf("enter 3 numbers");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>=b&&a>=c)
	printf("%d is greatest",a);
	if(b>=a&&b>=c)
	printf("%d is greatest",b);
	if(c>=b&&c>=a)
	printf("%d is greatest",c);
	
	printf("\n\n\n\n Press any key to exit...");
getch();
}
