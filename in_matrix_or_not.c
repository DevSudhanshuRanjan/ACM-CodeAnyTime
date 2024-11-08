#include <stdio.h>

int main()
{

    int r1;
    printf("Enter rows of first matrix: ");
    scanf("%d", &r1);
    int c1;
    printf("Enter coloumns of first matrix: ");
    scanf("%d", &c1);
    int arr1[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter the values at [%d][%d] of first matrix:", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n");
    printf("The first matrix is :\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    // taking the number input
    int num;
    printf("Enter a number of your choice: ");
    scanf("%d", &num);

    int count = 0;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (arr1[i][j] == num)
            {
                count += 1;
                break;
            }
        }
    }
    if (count > 0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}