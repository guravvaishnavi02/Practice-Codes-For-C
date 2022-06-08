/*2.	The distance between two cities (in km.) 
is input through the keyboard. Write a program to convert 
and print this distance in meters, feet, inches and centimetres. */

#include<stdio.h>
#include<conio.h>
main()
{
	float dis,mtr,foot,inch,cm;
	
	printf("enter distance in km");
	scanf("%f",&dis);
	
	mtr=dis*1000;
	foot=dis*3280.84;
	inch=dis*39370.1;
	cm=dis*100000;
	
	printf("distance in meters is %.3f",mtr);
	printf("\ndistance in feet is  %.3f",foot);
	printf("\ndistance in inches is %.3f",inch);
	printf("\ndistance in centimeteres is %.3f",cm);
	printf("\n\n\n\npress any key to exit.");
	getch();
	
}



