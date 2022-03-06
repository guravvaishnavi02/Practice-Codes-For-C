/* 13.	If a five-digit number is input through the keyboard, 
write a program to print a new number by adding one to each of its digits. 
For example if the number that is input is 12391 
then the output should be displayed as 23402.*/

#include <stdio.h>
#include <conio.h>
main()
{

	int num,nnum,d1,d2,d3,d4,d5,n1,n2,n3,n4;
	
	printf("enter any five digit number");
	scanf("%d",&num);
	
	d1=num%10;
	d1=d1+1;
	n1=num/10;
	
	d2=n1%10;
	d2=d2+1;
	n2=n1/10;
	
	d3=n2%10;
	d3=d3+1;
	n3=n2/10;
	
	d4=n3%10;
	d4=d4+1;
	n4=n3/10;
	
	d5=n4%100000;
	d5=d5+1;
	
	nnum=10000*d5+1000*d4+100*d3+10*d2+d1;
	
	printf("new no. is %d",nnum);

printf("\n\n\n\n Press any key to exit...");
getch();
} 
