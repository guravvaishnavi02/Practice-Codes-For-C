/*1. Ramesh's basic salary is input through the keyboard. 
His dearness allowance is 40% of basic salary,
and house rent allowance is 20% of basic salary. 
Write a program to calculate his gross salary. */

#include <stdio.h>
#include <conio.h>
main()
{
float bs,gs,da,hra;

printf("enter basic salary!");
scanf("%f",&bs);

da=bs*0.4 ;
hra=bs*0.2;
gs=bs+da+hra;
printf("basic salary is %.2f",bs);
printf("\ndearness allowance is %.2f",da);
printf("\nhouse rent allowance is %.2f",hra);
printf("\ngross salary is %.2f",gs);

printf("\n\n\n\n Press any key to exit...");
getch();
}

