/* 50.	Write a program to add first seven terms 
of the following series using a for loop: 1/1!+2/2!+3/3!+…*/
	
#include <stdio.h>
#include <conio.h>
main()
{ 
	int n=1,i=1;
	float exp;
	unsigned long int nf=1;
	
	
	while(i<=n)
	{ 
		nf=nf*i;
		i++;
	}

	for(exp=0;n<=7;)
	exp=exp+(n/nf);
	
	n++
	
	printf("value of exp is %f",exp)	
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}	
