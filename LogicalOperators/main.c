#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    //&&, ||, !

    printf("AND Logical Operator: %d\n", (a > 10 && b < 20));
    printf("OR Logical Operator: %d\n", (a > 10 || b < 20));
    printf("NOT Logical Operator: %d\n", !(a > 10 && b < 20));

    return 0;
}
