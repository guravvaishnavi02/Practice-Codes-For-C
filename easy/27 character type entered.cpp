/* 27.	Any character is entered through the keyboard; 
write a program to determine whether the character
entered is a capital letter, a small case letter, a digit or a special symbol. 
The following table shows the range of ASCII values for various characters. 
A - Z 65 - 90
a - z 97 - 122
0 - 9 48 - 57
special symbols	0 - 47, 58 - 64, 91 - 96, 123 - 127 */


#include <stdio.h>
#include <conio.h>

main()
{
	char i;
	printf("press any one key!!");
	scanf("%c",&i);
	
	if((i<=47&&i>=0)||(i<=64&&i>=58)||(i<=96&&i>=91)||(i<=127&&i>=123))
	printf("you entered a special symbol");
	else if(i<=90&&i>=65)
	printf("you entered a capital letter");
	else if(i<=122&&i>=97)
	printf("you entered a small letter");
	else if(i<=57&&i>=48)
	printf("you entered a digit");
	
	printf("\n\n\n\npress any key to exit...");
	getch();
}





