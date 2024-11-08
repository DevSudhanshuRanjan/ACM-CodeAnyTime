#include <stdio.h>

int main()
{

    int num;

    printf("Enter a number of your choice: ");
    scanf("%d", &num);
    int count = 0;
    int temp = num;
    int ans = num;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    int sol = 0;
    for (int i = 0; i < count; i++)
    {
        while (temp > 0)
        {
            int mul = 1;
            int remainder = temp % 10;
            for (int j = 0; j < count; j++)
            {
                mul *= remainder;
                // printf("%d\n",mul);
            }

            temp = temp / 10;
            sol += mul;
        }
    }
    if (sol == ans)
    {
        printf("The number is a armstrong.");
    }
    else{
        printf("The number is not an armstrong.");
    }

    return 0;
}