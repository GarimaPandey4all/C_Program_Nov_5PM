#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    //Nested Loops
    //outer loop
    for(i = 1; i <= 5; i++) // rows
    {
        //inner loop
        for(j = 1; j <= 5; j++) // cols
        {
            //printf("*");
            //printf("%d", i);
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
