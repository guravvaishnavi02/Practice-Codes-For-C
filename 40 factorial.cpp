/* 40.	Write a program to find the factorial 
value of any number entered through the keyboard.  */

#include <stdio.h>
#include <conio.h>

main()
{
	int n,i=1;
	unsigned long int f=1;
	
	printf("enter any number (less than 34)");
	scanf("%d",&n);
	
	while(i<=n)
	{ 
		f=f*i;
		i++;
	}
	printf("\nfactorial of %d is %d",n,f);
	
	printf("\n\n\n\npress any key to exit");
	getch();
}

