#include <stdio.h>

int main(){

    int num;
    
    printf("Enter a number of your choice: ");
    scanf("%d", &num);
    int fact = 1;
    for (int i = 1; i <=num; i++)
    {
        fact*=i;
    }
    
    printf("%d",fact);

    return 0;
}