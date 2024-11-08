#include <stdio.h>

int main(){

    int arr_name[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of element: ");
        int val ;
        scanf("%d",&val);
        arr_name[i] = val;
    }
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr_name[i];
    }
    printf("%d",sum);
    

    return 0;
}

/*

int arr[10];
arr[0] = 66;
printf("%d",arr[0]);
66

sizeof array -1 = indx of last element
int c = arr[4];
printf("%d",c)
5
*/