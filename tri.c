#include <stdio.h>

int main()
{

    int a = 4;
    for (int i = 1; i < a + 1; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            printf(" ");
        }
        // for (int k = 0; k < (2 * i) - 1; k++)
        // {
        //     printf("*");
        // }

        printf("*");
        // printf("\n");
        if (i > 1 && i != a)
        {
            for (int f = 0; f < 2*i - 3; f++)
            {
                printf(" ");
            }
            printf("*");
        }
        if(i == a){
            for (int m = 0; m < a+2; m++)
            {
                printf("*");
            }
            
        }
        printf("\n");
    }

    return 0;
}