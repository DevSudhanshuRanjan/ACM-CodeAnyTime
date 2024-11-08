#include <stdio.h>

int main()
{

    int a = 5;
    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        int temp = 0;

        if (i % 2 == 0)
        {
            int temp = (count + i) - 1;
            for (int k = 0; k < i; k++)
            {
                printf("%d", temp);
                temp--;
            }

            // count++;
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                count++;
                printf("%d", count);
            }
        }
        count ++;
        // if (i>4)
        // {
        //     count = temp+1;
        // }
        // else{
        //     count++;
        // }
        
        printf("\n");
    }

    return 0;
}