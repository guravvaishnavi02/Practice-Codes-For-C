/* 17.	According to the Gregorian calendar, it was Monday on the date 01/01/1900. 
If any year is input through the keyboard write a program
to find out what is the day on 1st January of this year. */

#include <stdio.h>
#include <conio.h>

main()
{
	int y,fd;
	long int d,td,ld;
	
	printf("enter year");
	scanf("%d",&y);
	
	d=(y-1)*365;
	ld=(y-1)/4-(y-1)/100+(y-1)/400;
	td=d+ld;
	fd=td%7;
	
	if(fd==0)
	printf("monday");
	
	if(fd==1)
	printf("tueday");
	
	if(fd==2)
	printf("wednesday");
	
	if(fd==3)
	printf("thursday");
	
	if(fd==4)
	printf("friday");	
	
	if(fd==5)
	printf("saturday");	
	
	if(fd==6)
	printf("sunday");
	
	
		
	printf("\n\n\n\npress any key to exit...");
	getch();
	
}
