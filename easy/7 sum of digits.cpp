/* 7.	If a five-digit number is input through the keyboard, 
write a program to calculate the sum of    
its digits. (Hint: Use the modulus operator '%') */

#include <stdio.h>
#include <conio.h>
main()
{
	int num,sum,d1,d2,d3,d4,d5,n1,n2,n3,n4,n5;
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
	
	sum=d1+d2+d3+d4+d5;
	
	
	printf("sum of its digits is %d",sum);
	
	

	printf("\n\n\n\n Press any key to exit...");
getch();
}

