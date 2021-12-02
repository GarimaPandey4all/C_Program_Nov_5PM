#include<stdio.h>

void main()
{
	int a, b;  // variable declaration/Creation
	clrscr();

	printf("Enter value for a and b:");
	scanf("%d%d", &a, &b); //scanf(): used to take  user input at runtime
	//%d:
	//&-address of operator
	printf("Addition is: %d", (a + b));
	getch();

}