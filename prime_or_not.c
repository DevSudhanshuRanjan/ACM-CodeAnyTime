#include <stdio.h>

int main(){

    int num;
    printf("Enter the number of your choice: ");
    scanf("%d",&num);
    int counter = 0;
    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            // printf("The number is not a prime number\n");
            // break;
            counter ++;
        }
        
        
    }
        if (counter>0)
        {
            
            printf("The number is not a prime number\n");
        }
        else{

            printf("The number is prime.\n");
        }
    

    return 0;
}