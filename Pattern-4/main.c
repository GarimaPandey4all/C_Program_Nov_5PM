#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++) // rows
    {
        for(j = 1; j <= i; j++) // cols
        {
            printf("*");
            //printf("%d", i);
            //printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
