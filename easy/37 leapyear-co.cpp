/* 37.	Write a program using conditional operators to determine 
whether a year entered through the keyboard is a leap year or not. */

#include <stdio.h>
#include <conio.h>
main()
{		
	
	int y;
	printf("enter year");
	scanf("%d",&y);	
	
	((y%100==0 && y%400==0)||(y%100!=0 && y%4==0))?printf("leap year"):printf("not a leap year");
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}	

