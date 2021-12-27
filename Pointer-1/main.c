#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int *pValue = &a;

    printf("A is: %d\n", a);
    printf("*Pvalue is: %d\n", *pValue); // value of a variable
    printf("Pvalue is: %u\n", pValue); // address of a variable
    printf("&Pvalue is: %u\n", &pValue); // address of pointer variable

    return 0;
}
