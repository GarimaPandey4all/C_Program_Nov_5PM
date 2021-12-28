#include <stdio.h>
#include <stdlib.h>

//Call by reference

int main()
{
    int x, y;

    printf("Enter value for x and y:");
    scanf("%d %d", &x, &y);

    add(&x, &y); // call by reference
    //add(10, 20); // call by value

    return 0;
}

void add(int *a, int *b)
{
    printf("Addition is: %d", (*a + *b));
}
