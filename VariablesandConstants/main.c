#include <stdio.h>
#include <stdlib.h>

/*
    variable(vary or change)/container: It holds data
    constant: fixed value
*/

int main()
{
    const int a = 10;

    printf("%d\n", a);

    a = 50;

    printf("%d\n", a);

    return 0;
}
