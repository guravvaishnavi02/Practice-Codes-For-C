/* 34.	A university has the following rules for a student to qualify
for a degree with A as the main subject and B as the subsidiary subject: 
(a)	He should get 55 per cent or more in A and 45 per cent or more in B. 
(b)	If he gets than 55 per cent in A, he should get 55 per cent or more 
in B. However, he should get at least 45 per cent in A. 
(c)	If he gets less than 45 per cent in B and 65 per cent or more 
in A he is allowed to reappear in an examination in B to qualify. 
(d)	In all other cases he is declared to have failed. 
Write a program to receive marks in A and B and Output whether
the student has passed, failed or is allowed to reappear in B. */

#include <stdio.h>
#include <conio.h>
main()
{
	int a,b;
	printf("enter percentage marks of main subject A");
	scanf("%d",&a);
	printf("enter percentage marks of subsidiary subject B");
	scanf("%d",&b);
	
	
	if((a>=55&&b>=45)||(a>=45&&a<=55&&b>=55))
	printf("the student has passed");
	else if(a>=65&&b<=45)
	printf("the student is allowed to reappear in an examination in B to qualify");
	else
	printf("the student is declared to have failed");
	
		
	
	
	printf("\n\n\n\n Press any key to exit...");
 	getch();
}

