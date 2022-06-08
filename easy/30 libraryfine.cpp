/* 30.	A library charges a fine for every book returned late. 
For first 5 days the fine is 50 paisa, for 6-10 days fine is 
one rupee and above 10 days fine is 5 rupees. If you return the book 
after 30 days your membership will be cancelled. Write a program to accept 
the number of days the member is late to return the book
and display the fine or the appropriate message. */

#include <stdio.h>
#include <conio.h>

main()
{
	int d;
	printf("enter the number of days the member is late to return the book");
	scanf("%d",&d);
	
	if(d<=5)
	printf("fine is 50 paisa");
	else if(d<=10&&d>=6)
	printf("fine is one rupee");
	else if(d>10&&d<=30)
	printf("fine is 5 rupees");
	else
	printf("your membership will be cancelled");
	
	printf("\n\n\n\npress any key to exit...");
	getch();
	
}
