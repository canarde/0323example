#include <stdio.h>
int main(void)
{
    int n;
    int sum = 0;
    int count = 0;
    do {
        scanf("%d", &n);
        if(n > 9 || n < 1) continue;
        sum += n;
        count++;
    }while(n>=1 && n<=9);
    printf("종합 : %d, 평균 : %d\n", sum, sum/count);
    return 0;
}