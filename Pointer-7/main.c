#include <stdio.h>
#include <stdlib.h>
//
//pointer to a constant: value can't be changed
//constant pointer: address can't be changed

int main()
{
    const int value = 10;
    int number = 20;
    //pointer to a constant
    //const int *pvalue = &value;

    //constant pointer
    //int *const pvalue = &value;

//    pointer to a constant and constant pointer

    const int *const pvalue = &value;

    //*pvalue = 30; // error

    //pvalue = &number; // error

//    value = 50; // error

    printf("Value is: %d", value);

    return 0;
}
