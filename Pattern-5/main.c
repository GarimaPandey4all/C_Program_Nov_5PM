#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--) // rows
    {
        for(j = i; j >= 1; j--) // cols
        {
            printf("*");
            //printf("%d", i);
            //printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
