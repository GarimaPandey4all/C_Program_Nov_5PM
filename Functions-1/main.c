#include <stdio.h>
#include <stdlib.h>

//function: particular task
//benefit: reuseability

//function has four types:
//
//    1. function without return type and without arguments.
//    2. function without return type and with arguments.
//    3. function with return type and without arguments.
//    4. function with return type and with arguments.

//function declaration
void add();

int main()
{
    //function calling
    add();
    add();
    add();
    add();
    add();
    add();
    add();

    return 0;
}

// 1. function without return type and without arguments.

//function definition/body
void add()
{
    int a, b;

    printf("Enter any number for a and b:");
    scanf("%d %d", &a, &b);

    printf("Addition  is: %d\n", (a + b));
}
