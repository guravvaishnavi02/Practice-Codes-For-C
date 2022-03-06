/* 36.	Using conditional operators determine: 
Whether the character entered through the keyboard is a 
lower case alphabet or not. Whether a character entered through 
the keyboard is a special symbol or not. */


#include <stdio.h>
#include <conio.h>

main()
{
	char i;
	printf("press any one key!!");
	scanf("%c",&i);
	
	(((i<=47&&i>=0)||(i<=64&&i>=58)||(i<=96&&i>=91)||(i<=127&&i>=123))?printf("you entered a special symbol"):
	((i<=90&&i>=65)?printf("you entered a capital letter"):((i<=122&&i>=97)?printf("you entered a small letter"):
	((i<=57&&i>=48)?printf("you entered a digit"):printf("invalid input")))));
	
	printf("\n\n\n\npress any key to exit...");
	getch();
}


