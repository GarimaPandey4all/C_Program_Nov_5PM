#include <stdio.h>
#include <stdlib.h>

//bit - binary: 2 (0 or 1)
//1 byte: 8 bits

int main()
{
    int a = 10; // 2 or 4 bytes
//    int 2 bytes: 16 bit compiler: turbo c++
//    int 4 bytes: 32 bit compiler: code::blocks
    float b = 3.14f; // 4 bytes
    double c = 45.67; // 8 bytes
    char d = 'f'; // 1 byte

    printf("int is: %d\n", a);
    printf("float is: %.2f\n", b);
    printf("double is: %lf\n", c);
    printf("char is: %c\n", d);

    printf("size of int: %d\n", sizeof(a));
    printf("size of float: %d\n", sizeof(float));
    printf("size of double: %d\n", sizeof(c));
    printf("size of char: %d\n", sizeof(char));


    return 0;
}
