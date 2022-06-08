/* 33.	In a company, worker efficiency is determined on 
the basis of the time required for a worker to complete a particular job. 
If the time taken by the worker is between 2 - 3 hours, then 
the worker is said to be highly efficient. If the time required by the worker 
is between 3 - 4 hours, then the worker is ordered to improve speed. 
If the time taken is between 4 - 5 hours, the worker is given training 
to improve his speed, and if the time taken by the worker is more than 5 hours, 
then the worker has to leave the company.If the time taken by the worker 
is input through the keyboard, find the efficiency of the worker. */


#include <stdio.h>
#include <conio.h>
main()
{
	float t;
	printf("enter the time required for a worker to complete a particular job in hrs");
	scanf("%f",&t);
	
	if(t>=2&&t<=3)
	printf("the worker is highly efficient");
	if(t>3&&t<=4)
	printf("the worker is ordered to improve speed");
	if(t>4&&t<=5)
	printf("the worker is given training to improve his speed");
	if(t>5)
	printf("the worker has to leave the company");
	
	
	printf("\n\n\n\n Press any key to exit...");
	getch();
}

