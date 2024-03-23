#include <stdio.h>
int main()
{
    int num, result = 0, cnt=0;
    while(1)
    {
        scanf("%d", &num);
        if(num < 1 || num > 9) break;
        result = num;
        do{
            result *= 3;
            result = (result > 10) ? (result %=10) : result;
            cnt++;
        }while(result!=num);
        printf("%d",cnt);
    }
    return 0;
}
