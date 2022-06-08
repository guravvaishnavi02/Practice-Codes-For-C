/* 35.	The policy followed by a company to process customer orders is given by the following rules: 
i.	If a customer order is less than or equal to that in stock 
and has credit is OK, supply has requirement. 
ii.	If has credit is not OK do not supply. Send him intimation. 
iii.	If has credit is Ok but the item in stock is less than has order, 
supply what is in stock. Intimate to him data the balance will be shipped. 
Write a C program to implement the company policy. */


#include <stdio.h>
#include <conio.h>
main()
{
	char ord,crd;
	
	printf("is order less than supply?(y/n)"); 
	printf("is credit ok? (y/n)");
	scanf("%c %c",&ord,&crd);
	
	if(ord=='y')
	{
		if(crd=='y')
		printf("\nsupply has requirement");
		else 
		printf("\ncredit is not OK do not supply. Send him intimation");	
	}
	else 
	printf("\nsupply what is in stock. Intimate to him data the balance will be shipped.");
			
	
	printf("\n\n\n\n Press any key to exit...");
 	getch();
}
