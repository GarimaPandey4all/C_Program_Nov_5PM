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
void add(int, int);

int main()
{
    //function calling
    add(34, 67); // 34, 67: actual arguments or function arguments

    return 0;
}

// 2. function without return type and with arguments.

//function definition/body
void add(int a, int b)//int a, int b: formal arguments or function parameters
{
    printf("Addition  is: %d\n", (a + b));
}
