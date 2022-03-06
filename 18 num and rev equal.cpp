/* 18.	A five-digit number is entered through the keyboard. 
Write a program to obtain the reversed number and to
determine whether the original and reversed numbers are equal or not. */

#include <stdio.h>
#include <conio.h>
main()
{
	int num,rev,d1,d2,d3,d4,d5,n1,n2,n3,n4;
	printf("enter any five digit number");
	scanf("%d",&num);
	
	d1=num%10;
	n1=num/10;
	
	d2=n1%10;
	n2=n1/10;
	
	d3=n2%10;
	n3=n2/10;
	
	d4=n3%10;
	n4=n3/10;
	
	d5=n4%100000;
	
	rev=d1*10000+d2*1000+d3*100+d4*10+d5;
	
	printf("reverse of number is %d",rev);
	
	if(rev==num)
	printf("\nentered number and its reverse are equal");
	else 
	printf("\nentered number and its reverse are not equal");
	
	
	
	printf("\n\n\n\n Press any key to exit...");
getch();
}
