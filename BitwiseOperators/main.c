#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    //&, |, ^, <<, >>
//
//    R to L
//    ..........2 ^ 8 2 ^ 7 2 ^ 6 2 ^ 5 2 ^ 4 2 ^ 3 2 ^ 2 2 ^ 1 2 ^ 0
//    .........512 256 128 64 32 16 8 4 2 1
//
//    1 byte = 8 bits
//
//    128 64 32 16 8 4 2 1
//
//    5 = 0000 0101
//    8 = 0000 1000
//    7 = 0000 0111

//    5 = 0000 0101
//    7 = 0000 0111 &
//        0000 0101 = 5
//
//    //OR - Inclusive /Include OR
//
//    5 = 0000 0101
//    7 = 0000 0111 |
//        0000 0111 = 7
//
//    //X-OR - Exlusive / Exclude OR
//    5 = 0000 0101
//    7 = 0000 0111 ^
//        0000 0010 = 2
//
//    Left Shift
//    a << 1
//
//    a = 5 =
//
//        0000 0101
//        0000 1010 = 10
//
//    a << 2
//
//    0000 0101
//    0001 0100 = 20
//
//    Shortcut Left Shift:
//
//        a * 2 ^ shift
//        5 * 2 ^ 1 = 10
//
//        5 * 2 ^ 2 = 20
//
//    Right Shift
//    a >> 1
//
//    a = 5 =
//
//        0000 0101
//        0000 0010 = 2
//
//    a >> 2
//
//    0000 0101
//    0000 0001 = 1
//
//    Shortcut Left Shift:
//
//        a / 2 ^ shift
//        5 / 2 ^ 1 = 2
//
//        5 / 2 ^ 2 = 1

    printf("AND Bitwise: %d\n", (a & b));
    printf("OR Bitwise: %d\n", (a | b));
    printf("X-OR Bitwise: %d\n", (a ^ b));
    printf("Left Shift Bitwise: %d\n", (a << 1));
    printf("Right Shift Bitwise: %d\n", (a >> 1));


    return 0;
}
