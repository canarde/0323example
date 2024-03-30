#include <stdio.h>
int main(void)
{
    int i, n;
    int result = 0;
    scanf("%d", &n);
    for (i = 1; i<= n; i++)
    {
        if (i % 5 == 0 && n <= 100 )
        {
            result += i;
        }
    }
    printf("%d ",result);
    return 0;
}