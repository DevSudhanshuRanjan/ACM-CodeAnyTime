#include <stdio.h>
int main()
{
    /*int a = 27;
    int *p = &a;
    printf("%d\n", p);  // this represent the address in the decimal form.
    printf("%d\n", *p); // this represent the value at the address p in decimal form.
    printf("%p\n", p);  // this represent the address in hexadecimal form.
    printf("%p\n", *p); // this represent the value at the address p in hexadecimal form.
    printf("%d\n", &a); // this represent the address in the decimal form.
    printf("%p\n", &a); // this represent the address in hexadecimal form.*/
    int arr[] = {1,2,7};
    int *ptr = arr;
    printf("%d\n", ptr);
    printf("%d\n", *ptr);
    // for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    // {
    //     printf("%d\n", *(ptr+i));
    // }
    int num;
    printf("Enter a number of your choice: ");
    scanf("%d", &num);
    printf("%d",*(ptr+num-1));
    return 0;
}