#include <stdio.h>

int main(){

    int size_of_arr;
    printf("Enter a number of your choice: ");
    scanf("%d", &size_of_arr);
    int arr[size_of_arr];
    for (int i = 0; i < size_of_arr; i++)
    {
        printf("Enter the value of element: ");
        int val ;
        scanf("%d",&val);
        arr[i] = val;
    }
    printf("The loop in reversed form is :\n");
    for (int i = size_of_arr-1 ; i >=0; i--)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}