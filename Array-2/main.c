#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], result[SIZE][SIZE], rows, cols, i, j;

    printf("Enter number of rows:\n");
    scanf("%d", &rows);

    printf("Enter number of columns:\n");
    scanf("%d", &cols);

    printf("Enter values in Matrix-1:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter values in Matrix-2:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Values in Matrix-1 are:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d  ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Values in Matrix-2 are:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d  ", matrix2[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Addition is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
