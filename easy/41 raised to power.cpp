/* 41.	Two numbers are entered through the keyboard. 
Write a program to find the value of one number 
raised to the power of another.*/

#include <stdio.h>
#include <conio.h>
main()
{
	int a,b,i=1,p=1;
		
	printf("enter base number!");
	scanf("%d",&a);
	printf("enter index number!");
	scanf("%d",&b);
	
	while(i<=b)
	{
		p=p*a;
		i++;
	}
	printf("\n%d raised to the power %d is %d",a,b,p);

	
	printf("\n\n\n\n Press any key to exit...");
 	getch();
} 
