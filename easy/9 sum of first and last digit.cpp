/* 9. If a four-digit number is input through the keyboard, 
write a program to obtain the sum of the first and last digit of this number */

#include <stdio.h>
#include <conio.h>
main()
{
	int num,sumfl,d1,d2,d3,d4,d5,n1,n2,n3;
	printf("enter any four digit number");
	scanf("%d",&num);
	
	d1=num%10;
	n1=num/10;
	
	d2=n1%10;
	n2=n1/10;
	
	d3=n2%10;
	n3=n2/10;
	
	d4=n3%10;

	sumfl=d1+d4;
	
	printf("sum of first and last digit of number is %d",sumfl);
	
	printf("\n\n\n\n Press any key to exit...");
getch();
}
