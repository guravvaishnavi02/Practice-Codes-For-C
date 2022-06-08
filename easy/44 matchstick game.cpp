/* 44.	Write a program for a matchstick game being played between the
 computer and a user. Your program should ensure that the computer
  always wins. Rules for the game are as follows: 
-There are 21 matchsticks. 
-The computer asks the player to pick 1, 2, 3, or 4 matchsticks. 
-After the person picks, the computer does its picking. 
-Whoever is forced to pick up the last matchstick loses the game. */
 
  
#include <stdio.h>
#include <conio.h>
main()
{
	int m=21,p,c;
	
	while(1)
	{	
		printf("\n\nNo. of matches left = %d",m);
		printf("\nPick up 1,2,3 or 4 matches");
		scanf("%d",&p);
		if(p>4||p<1)
			continue;
		
		m=m-p;
		printf("\n\nNo. of matches left = %d",m);
		
		c=5-p;
		printf("\nOut of which computer picked up %d",c);
		
		m=m-c;
		if(m==1)
		{	 
			printf("\nNumber ofmatches left %d",m);
			printf("\nYou lost the game!!");
			break;
		}		
	}

	printf("\n\n\n\nPress any key to exit...");
 	getch();
} 
