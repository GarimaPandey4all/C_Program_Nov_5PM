#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        printf("Number is Even");
    }
    else {
        printf("Number is Odd");
    }

    return 0;
}
