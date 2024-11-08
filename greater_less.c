#include <stdio.h>

int main(){

    int num1;
    
    printf("Enter a number of your choice: ");
    scanf("%d", &num1);
    int num2;
    
    printf("Enter a number of your choice: ");
    scanf("%d", &num2);
    int num3;
    
    printf("Enter a number of your choice: ");
    scanf("%d", &num3);
    if (num1>num2 && num1>num3)
    {
        if (num2>num3)
        {
            printf("Number 1 is largest and number 3 is smalllest.");
        }
        else{
            printf("Number 1 is largest and number 2 is smalllest.");

        }
    }
    else if (num2>num1 && num2>num3)
    {
        if (num1>num3)
        {
            printf("Number 2 is largest and number 3 is smalllest.");
        }
        else{
            printf("Number 2 is largest and number 1 is smalllest.");

        }
    }
    else if (num3>num2 && num3>num1)
    {
        if (num2>num1)
        {
            printf("Number 3 is largest and number 1 is smalllest.");
        }
        else{
            printf("Number 3 is largest and number 2 is smalllest.");

        }
    }
    

    return 0;
}