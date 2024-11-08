#include <stdio.h>

int main(){

    int size_of_arr;
    int arr[size_of_arr];
    int arr_cpy[size_of_arr];
    printf("Enter a number of your choice: ");
    scanf("%d", &size_of_arr);
    for (int i = 0; i < size_of_arr; i++)
    {
        printf("Enter the value of element: ");
        int val ;
        scanf("%d",&val);
        arr[i] = val;

        arr_cpy[i] = arr[i];
    }
    return 0;
}