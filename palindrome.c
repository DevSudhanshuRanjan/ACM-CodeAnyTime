#include <stdio.h>
#include <string.h>


int main(){

    
    for (int i = 1; i <= 1000; i++)
    {
        int s = 0;
        int c = i;
        while(i >0){
            int r = i%10;
            s = r+(s*10);
            i = i/10;

        }
        if (c == s)
        {
            printf("%d\n",c);
        }
        i = c;
        
    }
    

    return 0;
}