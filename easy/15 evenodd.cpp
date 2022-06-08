/*15.	Any integer is input through the keyboard.
Write a program to find out whether it is an odd number or even number. */

#include <stdio.h>
#include <conio.h>

main()
{ 
	int num,a;
	printf("enter any number");
	scanf("%d",&num);
	
	a=num%2;
	
	if(a==0)
	{
	printf("number entered is even!");
	}
	else
	{
	printf("number entered is odd!");
	}


	printf("\n\n\n\npress any key to exit...");
	getch();
}
