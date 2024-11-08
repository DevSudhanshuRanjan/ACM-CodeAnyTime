#include <stdio.h>

int main(){
    int num;
    printf("Enter a number of your choice: ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter the value of the array: ");
        scanf("%d",&arr[i]);
    }
    int arr2[2];
    for (int i = 0; i < num; i++)
    {
        for (int j = i+1; j < num; j++)
        {
            if (arr[i]+arr[j] == 0)
            {
                arr2[0] = i;
                arr2[1] = j;
            }
            
        }
        
    }
        
    for (int i = 0; i < 2; i++)
    {
        printf("%d\t",arr2[i]);
    }
    
    

    return 0;
}