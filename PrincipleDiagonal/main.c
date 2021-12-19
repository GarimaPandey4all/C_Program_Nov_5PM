#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int matrix[SIZE][SIZE], rows, cols, i, j;

    printf("Enter number of rows:\n");
    scanf("%d", &rows);

    printf("Enter number of columns:\n");
    scanf("%d", &cols);

    printf("Enter values in Matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Values in Matrix are:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Principle Diagonal is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(i == j)
            {
                printf("%d  ", matrix[i][j]);
            }
        }
    }

    return 0;
}
