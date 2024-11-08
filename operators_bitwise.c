#include <stdio.h>

int main()
{

    int num;
    printf("Enter the number of your choice: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("%d", num);
    }
    return 0;
    
}
