#include <stdio.h>

int main()
{

    int num1;

    printf("Enter a number of your choice: ");
    scanf("%d", &num1);
    int num2;

    printf("Enter a number of your choice: ");
    scanf("%d", &num2);
    int str;
    printf("Press :\n 1 for addition \n 2 for subtraction \n 3 for multiplication\n 4 for division\n");
    scanf("%d", &str);
    switch (str)
    {
    case 1:
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;
    case 2:
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;
    case 3:
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
    case 4:
        printf("%d / %d = %d", num1, num2, num1 / num2);
        break;

    default:
        printf("Enter the number within the range.") ;
        break;
    }

    return 0;
}