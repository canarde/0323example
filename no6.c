#include <stdio.h>

int main(void)
{
    int n = 1;
    int pow = 1;
    int a, b;
    scanf("%d %d", &a, &b);/// a의 b승
    while(n <= b)
    {
        pow = pow * a;
        n= n + 1;
    }
    printf("%d", pow);
    return 0;
}