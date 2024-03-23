#include <stdio.h>
int main(void)
{
    int num, sum=0, count=0;
    do{
        scanf("%.1f", &num);
        if(count<4) continue;
        sum += num;
        count++;
    }while(count<4);
    printf("종합: %.1f, 평균: %.1f", sum, sum/count);
    return 0;
}
