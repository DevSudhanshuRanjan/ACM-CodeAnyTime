#include <stdio.h>

int printNumber(int n){
    if (n == 0)
    {
        // printf("%d\n",n);
        return n;
    }
    printNumber(n-1);
    printf("%d\n",n);
    
}

int usrNum(int n){
    
    if (n == 0)
    {
        return n;
    }
    printf("%d\n",n);
    usrNum(n-1);
    printf("%d\n",n);    
}

int powr(int a , int b){

    if (b == 0){
        return 1;
    }
    return a*powr(a,b-1);
}

int mulusr(int a , int b){
    if (b == 1){
        return a;
    }
    return a+mulusr(a,b-1);
}

int main()
{
    printNumber(5);
    printf("\n");
    usrNum(5);
    printf("\n");
    printf("%d",powr(5,3));
    printf("\n");
    printf("%d",mulusr(5,3));

    return 0;
}