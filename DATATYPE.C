#include<stdio.h>

void main()
{
//	65536: 0 to 65535

//	unsigned short int x = 65536;  // x = 0
	signed short int x = 32768;
	clrscr();

	printf("x is: %d\n", x);
	printf("x is: %u\n", x);

	getch();
}