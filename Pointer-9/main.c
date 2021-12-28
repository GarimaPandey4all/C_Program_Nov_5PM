#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var[3] = {10, 20, 30};
    int i;
    int *ptr[3];

    for(i = 0; i < 3; i++)
    {
        ptr[i] = &var[i];
    }

    printf("Value in Array are:\n");
    for(i = 0; i < 3; i++)
    {
        printf("%d\t", *ptr[i]);
    }

    return 0;
}
