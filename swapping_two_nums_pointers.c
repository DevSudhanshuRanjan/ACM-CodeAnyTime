#include <stdio.h>
void swap(int *a,int *b){
    
}

int main(){

    int a = 5;
    int b = 6;
    int *ptr = &a;
    int *ptr1 = &b;
    swap(ptr,ptr1);
    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}