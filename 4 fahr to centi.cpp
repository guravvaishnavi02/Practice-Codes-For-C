/* 4.	Temperature of a city in Fahrenheit degrees is input through the keyboard. 
Write a program to convert this temperature into Centigrade degrees. */

#include<stdio.h>
#include <conio.h>
 main()
 {
 	float fahr,cent;
 	
 	printf("enter temperature in Fahrenheit degrees");
 	scanf("%f",&fahr);
 	
 	cent=(fahr - 32)*5/9;
 	
 	printf("temperature is %.2f degree centigrade",cent);
 	
 	printf("\n\n\n\npress any key to exit");
 	getch();
 }
