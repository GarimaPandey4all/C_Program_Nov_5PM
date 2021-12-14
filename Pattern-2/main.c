#include <stdio.h>
#include <stdlib.h>

int main()
{
//    ASCII Character:
//
//        A to Z: 65 to 90
//        a to z: 97 to 122

    //char i, j;
    int i , j;

    //Nested Loops
    //outer loop
    //for(i = 'A'; i <= 'E'; i++) // rows
    for(i = 65; i <= 69; i++)
    {
        //inner loop
        for(j = 65; j <= 69; j++) // cols
        {
            printf("%c", i);
            //printf("%c", j);
        }
        printf("\n");
    }

    return 0;
}
