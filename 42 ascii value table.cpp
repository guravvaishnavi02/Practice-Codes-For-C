/* 42.	Write a program to print all the ASCII values and 
their equivalent characters using a while loop. 
The ASCII values vary from 0 to 255. */

#include <stdio.h>
#include <conio.h>
main()
{
	int i=0;
	
	while(i<=255)
	{
		printf("\nASCII value %d correspondes to %c",i,i);
		i++;
	}
				
	printf("\n\n\n\n Press any key to exit...");
 	getch();
} 


