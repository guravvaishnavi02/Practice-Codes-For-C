/* 12.	If the total selling price of 15 items and the total profit 
earned on them is input through the keyboard, 
write a program to find the cost price of one item. */

#include <stdio.h>
#include <conio.h>
main()
{
	float tsp,tp,tcp,cp;
	printf("enter total selling price in Rs.");
	scanf("%f",&tsp);
	
	printf("enter total profit in Rs.");
	scanf("%f",&tp);
	
	tcp=tsp-tp;
	cp=tcp/15;
	
	printf("cost price of one item is Rs.%.2f",cp);
	
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}	

