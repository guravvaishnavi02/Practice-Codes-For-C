/* 45.	Write a program to enter the numbers till the user wants 
and at the end it should display the count of positive, 
negative and zeros entered.*/

#include <stdio.h>
#include <conio.h>
main()
{
	int a,z,p,n;
	printf("enter numbers:(press crt+f at end)");
	
	while(scanf("%d",&a))
	{
	if(a<0)
	n++;
	else if(a>0)
	p++;
	else if(a==0)
	z++;
	}	
	
	printf("\nno. of zeros entered = %d",z);
	printf("\nno. of posiive no.s entered = %d",p);
	printf("\nno. of negative no.s entered = %d",n);
 } 
