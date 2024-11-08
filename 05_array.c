#include <stdio.h>

int main(){

    int size_of_arr;
    printf("Enter a range of the array: ");
    scanf("%d", &size_of_arr);
    int arr[size_of_arr];
    for (int i = 0; i < size_of_arr; i++)
    {
        printf("Enter the value of element: ");
    scanf("%d", &arr[i]);
    }
    int evenCnt = 0 , oddCnt = 0;
    for (int i = 0; i < size_of_arr; i++)
    {
        if (arr[i] %2 == 0)
        {
            evenCnt +=1;
        }
        else{
            oddCnt += 1;
        }
        
    }
    printf("The number of even elements in the array is %d and number of odd element in the array is %d",evenCnt,oddCnt);
    
    return 0;
}