#include <stdio.h>
int main()
{
    int num, result = 1, n= 0;
    while(1){
        scanf("%d", &num);
        if (num < 1 || num > 15) break;
        while(n < num){
            result = result*2;
            n++;
            }
        printf("%d", result);
    
    }
    
    return 0;
}