#include <stdio.h>

/*
 * * * * *
 *       *
 *       *
 *       *
 * * * * *
 */

int main()
{
    int a = 5;
    for (int i = 1; i <= a; i++)
    {
        if (i == 1 || i == a)
        {
            for (int j = 0; j < a; j++)
            {
                printf("*");
            }
        }

        if (i != 1 && i != a)
        {
            printf("*");
            for (int k = 0; k < a - 2; k++)
            {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }

    return 0;
}