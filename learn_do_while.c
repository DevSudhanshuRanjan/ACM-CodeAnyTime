#include <stdio.h>

int main()
{

    do
    {
        int num1;

        printf("Enter first number of your choice: ");
        scanf("%d", &num1);
        int num2;

        printf("Enter second number of your choice: ");
        scanf("%d", &num2);
        int str;
        printf("Press :\n 1 for addition \n 2 for subtraction \n 3 for multiplication\n 4 for division\n");
        scanf("%d", &str);
        if (str == 1)
        {
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
        }
        else if (str == 2)
        {
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
        }
        else if (str == 3)
        {
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
        }
        else if (str == 4)
        {
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        }
        else if (str !=1 || str != 2 ||str != 3 || str!= 3)
        {
            break;
        }
        

    } while (1);

    return 0;
}