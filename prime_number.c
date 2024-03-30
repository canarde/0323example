#include <stdio.h>
int main(void)
{
    int n = 2, div, cnt;
    while (n <= 100)
    {
        div = 1, cnt = 0;;
        while(div <= n)
        {
            if (n % div == 0)
            {
                cnt++; //자신과 나누어진 수에 대해 cnt 증가
            }
            div++;
        }
        if ( cnt <= 2)//자신과 1만 나누어질 경우 cnt = 2
        {
            printf("%d ", n);
        }
        n++;

    }
    return 0;
}