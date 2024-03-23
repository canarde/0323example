#include <stdio.h>
int main(void)
{
    int n;
    int sum = 0;
    int count = 0;
    while(1){
        scanf("%d", &n);
        if(n > 9 || n < 1) break;
        sum += n;
        count++;
    }
    printf("종합 : %d, 평균 : %d\n", sum, sum/count);
    return 0;
}