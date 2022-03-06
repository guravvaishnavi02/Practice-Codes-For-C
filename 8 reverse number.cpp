/* 8.	If a five-digit number is input through the keyboard,
write a program to reverse the number. */

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
	
	printf("\n\n\n\n Press any key to exit...");
getch();
}
