#include <stdio.h>
int main(void)
{
    int i, n;
    int result = 0;
    scanf("%d", &n);
    for (i = 1; i<= n; i++)
    {
        result = i;
        printf("%d ",result);
    }
    
    return 0;
}