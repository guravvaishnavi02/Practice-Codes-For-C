/*  16.	Any year is input through the keyboard. 
Write a program to determine whether the year 
is a leap year or not. (Hint: Use the % (modulus) operator) */

#include <stdio.h>
#include <conio.h>

main()
{
	int y;
	printf("enter year");
	scanf("%d",&y);	
	
	if(y%100==0)
	{
		if(y%400==0)
			printf("leap year");
		else
			printf("not a leap year");
	}
	else
	{
		if(y%4==0)
			printf("leap year");
		else
			printf("not a leap year");
	}

	
	printf("\n\n\n\npress any key to exit...");
	getch();
	
}
