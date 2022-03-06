/* 23.	Given three points (x1, y1), (x2, y2) and (x3, y3), 
write a program to check if all the three points fall on one straight line */

#include <stdio.h>
#include <conio.h>
main()
{	
	int x1,y1,x2,y2,x3,y3,s1,s2;
	
	printf("enter coordinates of point A");
	scanf("%d %d",&x1,&y1);
	
	printf("enter coordinates of point B");
	scanf("%d %d",&x2,&y2);
	
	printf("enter coordinates of point C");
	scanf("%d %d",&x3,&y3);
	
	s1=(y2-y1)/(x2-x1);
	s2=(y3-y1)/(x3-x1);
	
	if(s1==s2)
	printf("all the three points fall on one straight line ");
	else
	printf("all the three points do not fall on one straight line ");	



	printf("\n\n\n\n Press any key to exit...");
	getch();
}	
