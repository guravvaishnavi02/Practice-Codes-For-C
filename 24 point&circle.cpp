/*24.	Given the coordinates (x, y) of a centre of a circle 
and its radius, write a program which will determine whether
a point lies inside the circle, on the circle or 
outside the circle. (Hint: Use sqrt( ) and pow( ) functions) */

#include <stdio.h>
#include <conio.h>
main()
{	
	int x1,y1,r,x2,y2,d;
	
	printf("enter coordinates center of circle");
	scanf("%d %d",&x1,&y2);
	
	printf("enter radius of circle");
	scanf("%d",&r);	
	
	printf("enter coordinates of point");
	scanf("%d %d",&x2,&y2);
	
	d=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	r=r*r;
	
	if(d>r)
	printf("point lies outside the circle");
	
	else if(d<r)
	printf("point lies inside the circle");
	 
	else if(d==r)
	printf("pointlies on the circle");
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}	

