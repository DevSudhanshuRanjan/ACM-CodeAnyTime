#include <stdio.h>

// int getSum(int a, int b){
//     return a+b;
// }
// int getSub(int a, int b){
//     return a-b;
// }
// int getMul(int a, int b){
//     return a*b;
// }
// int getDiv(int a, int b){
//     return a/b;
// }
int getSum(int a,int b);
int getSub(int a,int b);
int getMul(int a,int b);
int getDiv(int a,int b);

int main(){

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
        printf("%d + %d = %d", num1, num2, getSum(num1,num2));
        break;
    case 2:
        printf("%d - %d = %d", num1, num2, getSub(num1,num2));
        break;
    case 3:
        printf("%d * %d = %d", num1, num2, getMul(num1,num2));
        break;
    case 4:
        printf("%d / %d = %d", num1, num2, getDiv(num1,num2));
        break;

    default:
        printf("Enter the number within the range.") ;
        break;
    }
    

    return 0;
}

int getSum(int a, int b){
    return a+b;
}
int getSub(int a, int b){
    return a-b;
}
int getMul(int a, int b){
    return a*b;
}
int getDiv(int a, int b){
    return a/b;
}