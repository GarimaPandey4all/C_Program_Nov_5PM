#include <stdio.h>
#include <stdlib.h>

int main()
{
//    palindrome number
//
//    121 = 121 P
//    123 = 321 NP

    int n, r, temp, sum = 0;

    printf("Enter any number:");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        //n = 121
        r = n % 10; // 1, 2, 1
        sum = sum * 10 + r; // 1, 12, 121
        n = n / 10; // 12, 1, 0
    }

    n = temp;

    if(sum == n)
    {
        printf("Palindrome Number");
    }
    else {
        printf("Not Palindrome Number");
    }

    return 0;
}
