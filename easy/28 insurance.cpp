/* 28.	An Insurance company follows following rules to calculate premium. 
a.	If a person's health is excellent and the person is between 25 
and 35 years of age and lives in a city and is a male 
then the premium is Rs. 4 per thousand and his policy 
amount cannot exceed Rs. 2 lakhs. 
b.	If a person satisfies all the above conditions except 
that the sex is female then the premium is Rs. 3 per thousand 
and her policy amount cannot exceed Rs. 1 lakh. 
c.	If a person's health is poor and the person is between
25 and 35 years of age and lives in a village and is a male 
then the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000. 
d.	 In all other cases the person is not insured. 
Write a program to output whether the person should be insured or not,
his/her premium rate and maximum amount for which he/she can be insured. */


#include <stdio.h>
#include <conio.h>

main()
{
	int h,a,g,r;
	
	printf("enter health of person.(excellent=1,poor=2)");
	scanf("%d",&h);
	printf("enter age of person");
	scanf("%d",&a);
	printf("enter gender of person.(male=1,female=2,transgender=3)");
	scanf("%d",&g);
	printf("enter location of person.(city=1,village=2)");
	scanf("%d",&r);


	if(a<=35&&a>=25&&g==1&&h==1&&r==1)
	printf("the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs");
	
	else if(a<=35&&a>=25&&g==2&&h==1&&r==1)
	printf("the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh");
	
	else if(a<=35&&a>=25&&g==1&&h==1&&r==2)
	printf("the premium is Rs. 6 per thousand and his policy amount cannot exceed Rs. 10000");
	
	else 
	printf("the person is not insured. ");
	
	
	
	printf("\n\n\n\npress any key to exit...");
	getch();
}





