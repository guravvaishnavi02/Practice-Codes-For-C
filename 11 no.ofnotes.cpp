/* 11.	A cashier has currency notes of denominations 10, 50 and 100.
If the amount to be withdrawn is input through the keyboard in hundreds, 
find the total number of currency notes of each denomination 
the cashier will have to give to the withdrawer. */


#include <stdio.h>
#include <conio.h>
main()
{
	
	int t,f,h,amt;
	
	printf("enter amount");
	scanf("%d",&amt);
	
	h=amt/100;
	amt=amt%100;
	
	f=amt/50;
	amt=amt%50;
	
	t=amt/10;
	
	printf("no. of notes of \nhundred=%d \nfifty=%d \nten=%d",h,f,t);
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}	
