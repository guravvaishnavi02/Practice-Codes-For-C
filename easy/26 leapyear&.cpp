/* 26.	Any year is entered through the keyboard, 
write a program to determine whether the year 
is leap or not. Use the logical operators && and ||. */

	
	
#include <stdio.h>
#include <conio.h>
main()
{		
	
	int y;
	printf("enter year");
	scanf("%d",&y);	
	
	if((y%100==0 && y%400==0)||(y%100!=0 && y%4==0))
	printf("leap year");
	else
	printf("not a leap year");
	

	
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}	





