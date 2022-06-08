/* 19.	If the ages of Ram, Shyam and Ajay are input 
through the keyboard, write a program 
to determine the youngest of the three. */

#include <stdio.h>
#include <conio.h>
main()
{
	int r,s,a;
	
	printf("enter ages of Ram, Shyam and Ajay");
	scanf("%d %d %d",&r,&s,&a);
	
	if(r>s)
	{
		if(s>a)
		printf("Ajay is youngest");
		else
		printf("Shyam is youngest");
	}
	else 
	{ 	
		if(r>a)
		printf("Ajay is youngest");
		else 
		printf("Ram is youngest");
	}
	
		
	printf("\n\n\n\n Press any key to exit...");
 	getch();
}
