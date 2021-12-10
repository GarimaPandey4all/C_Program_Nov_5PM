#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hindi, english, maths, science, sanskrit, sum, percentage;

    printf("Enter your marks:");
    scanf("%d %d %d %d %d", &hindi, &english, &maths, &science, &sanskrit);

    sum = hindi + english + maths + science + sanskrit;

    printf("Total marks is: %d\n", sum);

    percentage = sum / 5;

    printf("Percentage is: %d\n", percentage);

    if(percentage >= 50 && percentage <= 60)
    {
        printf("Grade D");
    }
    else if(percentage >= 60 && percentage <= 70)
    {
        printf("Grade C");
    }
    else if(percentage >= 70 && percentage <= 80)
    {
        printf("Grade B");
    }
    else if(percentage >= 80 && percentage <= 100)
    {
        printf("Grade A");
    }
    else {
        printf("Fail....");
    }

    return 0;
}
