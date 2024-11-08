#include <stdio.h>

int main(){

    int num;
    
    printf("Enter a number of your choice: ");
    scanf("%d", &num);
    if (num & 1)
    {
        printf("The number is odd");
    }
    else{
        printf("The number is even.");
    }
    

    return 0;
}