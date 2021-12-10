#include <stdio.h>
#include <stdlib.h>
//
//Decision Making Statements / Comparison Statements
//
//    1. If-else
//    2. If-else if-else
//    3. Switch
//    4. Ternary Operator / Conditional Operator, Shorthand of if-else

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

//    if(a > b)
//    {
//        printf("A is greater");
//    }
//    else {
//        printf("B is greater");
//    }

//    Ternary Operator / Conditional Operator
//
//    Ternary: 3
//
//    (condition) ? true : false;

    (a > b) ? printf("A is Greater") : printf("B is Greater");

    return 0;
}
