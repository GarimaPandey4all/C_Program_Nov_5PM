#include <stdio.h>
#include <stdlib.h>

//string: Collection of characters or more than one character

int main()
{
    char name[10];

    printf("Enter your name:");
    //scanf("%s", &name);
    gets(name);

    puts(name);
    printf("Your name is: %s", name);

    return 0;
}
