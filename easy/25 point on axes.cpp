/* 25.	Given a point (x, y), write a program to find out 
if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). */

#include <stdio.h>
#include <conio.h>
main()
{	
	int x1,y1;
	
	printf("enter coordinates of point");
	scanf("%d %d",&x1,&y1);
	
	if(x1==0&&y1==0)
	printf("point is origin");
	else if(x1==0&&y1!=0)
	printf("point lies on y-axis");
	else if(x1!=0&&y1==0)
	printf("point lies on x-axis");
	else
	printf("point does not lies on either axes");
	
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}	
	
