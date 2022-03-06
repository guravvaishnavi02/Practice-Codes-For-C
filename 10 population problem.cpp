/* 10.	In a town, the percentage of men is 52. The percentage of total literacy is 48.
 If total percentage of literate men is 35 of the total population, 
 write a program to find the total number of illiterate men 
 and women if the population of the town is 80,000. */
 
#include <stdio.h>
#include <conio.h>
main()
{
	
	
	int mp,tlp,mlp,tp,tilp,wp,milp,wilp;
	
	tp=80000;
	tlp=0.48*tp;
	tilp=tp-tlp;
	
	mp=0.52*tp;
	mlp=0.35*tp;
	milp=mp-mlp;
	
	wp=tp-mp;
	wilp=tilp-milp;
	
	printf("total illiterate population is %d",tilp);
	printf("\ntotal number of illiterate men are %d",milp);
	printf("\ntotal number of illiterate women are %d",wilp);

printf("\n\n\n\n Press any key to exit...");
getch();
}
