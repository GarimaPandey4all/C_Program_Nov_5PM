#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pValue = NULL;
    int number = 40;

    pValue = &number;

    printf("*pvalue is: %d\n", *pValue);

    *pValue += 60;

    printf("*pvalue is: %d\n", *pValue);

    return 0;
}
