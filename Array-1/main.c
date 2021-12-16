#include <stdio.h>
#include <stdlib.h>

//Array: Array is a collection of similar types of data.
//[] - closed bracket, subscript operator
//
//5: size of the array,
//n = 5
//index number: 0 to n - 1

int main()
{
    int lists[5] = {10, 20, 30, 40, 50}; // array declare and initialize
    int i;

    int arr[5]; // only declare

    printf("%d\n", lists[0]);
    printf("%d\n", lists[1]);
    printf("%d\n", lists[2]);
    printf("%d\n", lists[3]);
    printf("%d\n", lists[4]);

    for(i = 0; i < 5; i++)
    {
        printf("%d  ", lists[i]);
    }

    printf("\n");

    printf("Enter values in an Array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d  ", arr[i]);
    }


    return 0;
}
