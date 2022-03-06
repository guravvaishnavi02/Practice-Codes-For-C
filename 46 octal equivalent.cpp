/* 46.	Write a program to find the octal equivalent of the entered number*/

#include <stdio.h>
#include <conio.h>
main()
{
	int a,n,i = 0,j;
	int octalNum[100],on[100];
	
	printf("enter number to be converted into octal");
	scanf("%d",&a);
	n=a;
	
	while (n!=0) 
	{ 
    	octalNum[i] =n % 8; 
        n = n / 8; 
        i++; 
    } 
  
    printf("\noctal equivalent of %d is ",a); 
  
    for (j = i - 1; j >= 0; j--) 
    printf("%d",octalNum[j]);
    
    
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}


  

