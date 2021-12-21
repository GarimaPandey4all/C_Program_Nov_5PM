#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10];
    char str2[10];

    printf("Enter any string:");
    gets(str1);

    printf("Enter any string:");
    gets(str2);


//    printf("Length of the String:%d\n", strlen(str));
//    printf("Uppercase String: %s\n", strupr(str));
//    printf("Lowercase String: %s\n", strlwr(str));


    //printf("String 1 is copying in String 2: %s", strcpy(str2, str1));
    //printf("String 1 is copying in String 2: %s\n", strcpy(str2, "Delhi"));

    //printf("String 1 is concatenated/joined to String 2: %s", strcat(str1, str2));

//    str1 = abc
//    str2 = bac

    if(strcmp(str1, str2) == 0)
    {
        printf("Both the Strings are Same");
    }
    else {
        printf("Not Same Strings");
    }

    return 0;
}
