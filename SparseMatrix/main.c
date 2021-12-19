#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int matrix[SIZE][SIZE], rows, cols, i, j, count = 0;

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

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(matrix[i][j] == 0)
            {
                count++; // count number of zeroes
            }
        }
    }

    if(count > (rows * cols)/2)
    {
        printf("Sparse Matrix");
    }
    else
    {
        printf("Not a Sparse Matrix");
    }

    return 0;
}
