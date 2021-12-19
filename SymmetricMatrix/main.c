#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int matrix[SIZE][SIZE], temp[SIZE][SIZE], rows, cols, i, j, count = 1;

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
            temp[j][i] = matrix[i][j];
        }
    }

    printf("Values in Transpose Matrix is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d  ", temp[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(matrix[i][j] != temp[i][j])
            {
                count++;
                break;
            }
        }
    }

    if(count == 1)
    {
        printf("Symmetric Matrix");
    }
    else {
        printf("Not Symmetric Matrix");
    }

    return 0;
}
