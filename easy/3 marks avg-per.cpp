/* 3.	If the marks obtained by a student in five different subjects 
are input through the keyboard, find out the aggregate marks and
percentage marks obtained by the student. Assume that the maximum marks
that can be obtained by a student in each subject are 100. */

#include<stdio.h>
#include<conio.h>

main()
{
	float s1,s2,s3,s4,s5,avg;
	
	printf("enter marks in five subjects");
	scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
	
	avg=(s1+s2+s3+s4+s5)/5;
	
	printf("avgerage marks are %.2f and percentage is %.2f",avg,avg);
	
	printf("\n\n\n\npress any key to exit");
	getch();
}
