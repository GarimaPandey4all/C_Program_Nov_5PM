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
int add(int, int);

int main()
{
    //function calling
    int result = add(34, 67);

    printf("Addition is: %d", result);

    return 0;
}

// 4. function with return type and with arguments.
//function definition/body
int add(int a, int b)
{
    return (a + b);
}
