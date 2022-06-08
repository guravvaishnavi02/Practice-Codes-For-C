/* 14.	If cost price and selling price of an item is input through the keyboard, 
write a program to determine whether the seller has made profit or incurred loss.
Also determine how much profit he made or loss he incurred. */

#include <stdio.h>
#include <conio.h>
main()
{
	float tsp,tp,tl,tcp;
	printf("enter total selling price in Rs.");
	scanf("%f",&tsp);
	
	printf("enter total cost price in Rs.");
	scanf("%f",&tcp);
	
	if(tsp>tcp)
	{
		tp=tsp-tcp;
		printf("profit of Rs.%.2f",tp);
	}
	else if(tsp<tcp)
	{
		tl=tcp-tsp;
		printf("loss of Rs.%.2f",tl);
	}
	else
	{
		printf("there is no profit nor loss");
	}
	
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}	

