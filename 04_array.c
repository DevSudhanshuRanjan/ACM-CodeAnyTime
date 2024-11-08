#include <stdio.h>

int main()
{

    int size_of_arr;
    printf("Enter a range of the array: ");
    scanf("%d", &size_of_arr);
    int arr[size_of_arr];
    for (int i = 0; i < size_of_arr; i++)
    {
        printf("Enter the value of element: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size_of_arr; i++)
    {
        if (arr[i] > arr[i+1])
        {
            int temp= arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            i = -1;
             
        }
        
    }
    printf("The minimum element of the array is %d and the maximum element is %d",arr[0],arr[size_of_arr-1]);
    return 0;
}