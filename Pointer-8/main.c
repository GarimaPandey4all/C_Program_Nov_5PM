#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    char c = 'A';
    float f = 34.6f;

    void *ptr; // void pointer

    ptr = &i;
    printf("I is: %d\n", *(int *)ptr);

    ptr = &c;
    printf("C is: %c\n", *(char *)ptr);

    ptr = &f;
    printf("F is: %f\n", *(float *)ptr);

    return 0;
}
