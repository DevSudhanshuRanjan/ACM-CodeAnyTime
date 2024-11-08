#include <stdio.h>

int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("The value of a is %d , and the value of b is %d",a,b);
    return 0;
}

int main(){

    int num1;
    
    printf("Enter a number of your choice: ");
    scanf("%d", &num1);
    int num2;
    
    printf("Enter a number of your choice: ");
    scanf("%d", &num2);
    swap(num1,num2);
    // printf("%d",swap(num1,num2));

    return 0;
}