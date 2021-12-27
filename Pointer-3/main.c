#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 10;
    int *pValue = &number;

    number = *pValue;

    printf("number is: %d\n", number);

    return 0;
}
