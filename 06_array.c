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
    int freq[size_of_arr];
    for (int i = 0; i < size_of_arr; i++)
    {
        int counter = 0;
        for (int j = 0; j < size_of_arr; j++)
        {
            if (arr[i] == arr[j])
            {
                counter += 1;
            }
        }
        freq[i] = counter;
    }
    for (int i = 0; i < size_of_arr; i++)
    {
        int counter = 0;
        for (int j = 0; j < size_of_arr; j++)
        {
            if (arr[i] == arr[j])
            {
                counter += 1;
            }
        }
        
        
    }
    
    
    for (int i = 0; i < size_of_arr; i++)
    {
        printf("%d occurs %d time\n", arr[i], freq[i]);     
           
    }

    return 0;
}