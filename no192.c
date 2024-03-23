#include <stdio.h>
#include <math.h>
int main()
{
    int num, result = 1, n= 0;
    while(1){
        scanf("%d", &num);
        if (num < 1 || num > 15) break;
        printf("%.f",pow(2.0, (double)num));
    
    }
    
    return 0;
}