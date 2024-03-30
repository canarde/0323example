#include <stdio.h>
int main(void)
{
    int i, n;
    int sum = 0;
    scanf("%d", &n);
    for (i = 0;; i++)
    {
        sum = sum + i;
         if (sum >= n )break;
    }
    printf("마지막으로 더해진 값 : %d\n누적된 합 : %d\n ", i, sum);
    return 0;
}