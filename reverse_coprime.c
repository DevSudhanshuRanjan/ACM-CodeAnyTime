#include <stdio.h>

int coprime(int a)
{
    int s = 0;
    int c = a;
    while (a > 0)
    {
        int r = a % 10;
        s = r + (s * 10);
        a = a / 10;
    }
    // printf("%d %d",s,c);
    for (int i = 2; i <= c; i++)
    {
        if ((c%i == 0) && (s%i == 0))
        {
            printf("The number are not co prime.");
            break ;
        }
        
    }
    return 0;
}

int main()
{

    int num;

    printf("Enter a number of your choice: ");
    scanf("%d", &num);
    coprime(num);

    return 0;
}