#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value = 0;
    int *pValue = &value;

    printf("Enter any value:");
    scanf("%d", pValue);

    printf("Value is: %d", *pValue);

    return 0;
}
