#include <stdio.h>
#include <stdlib.h>
//
//Operators:
//
//    1. Arithmetic Operators
//    2. Relational / Comparison Operators
//    3. Logical Operators
//    4. Bitwise Operators
//    5. Assigenment Operators

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    //+, -, *, /, %, ++, --

    printf("Addition is: %d\n", (a + b));
    printf("Subtraction is: %d\n", (a - b));
    printf("Multiplication is: %d\n", (a * b));
    printf("Division is: %d\n", (a / b));
    //a = 5, b = 10
    printf("Modulus is: %d\n", (a % b)); // 5
//
//    Increment: Pre or Post
//    Decrement: Pre or Post

    printf("Pre-Increment is: %d\n", ++a); // 5 + 1 = 6
    printf("Post-Increment is: %d\n", a++); // 6
    printf("a is: %d\n", a); // a = 7

    printf("Pre-Decrement is: %d\n", --a); // a = 7 - 1 = 6
    printf("Post-Decrement is: %d\n", a--); // a = 6
    printf("a is: %d\n", a); // a = 5
    return 0;
}
