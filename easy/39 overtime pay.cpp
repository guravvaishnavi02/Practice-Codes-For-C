/* 39.	Write a program to calculate overtime pay of 10 employees.
 Overtime is paid at the rate of Rs. 12.00 per hour for every hour 
 worked above 40 hours. Assume that employees 
 do not work for fractional part of an hour. */
 #include <stdio.h>
 #include <conio.h>
 
 main()
 {
 	float op;
 	int i,t;
 	
 	while(i<=10)
 	{
 		
 		printf("enter no. of hours worked");
 		scanf("%d",&t);
 		
 		if(t>=40)
 		{ 
 			op=(t-40)*12.00;
 			printf("\novertime pay is rs, %f\n",op);
		}
		else
		printf("\nno overtime pay\n");
		
		i++;
	 }
 	
 	printf("press any key to exit");
 	getch();
 	
 		
 }
