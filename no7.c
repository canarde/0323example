#include <stdio.h>

int main(void)
{
    int n;
    int a = 1;
    int b = 0;
    scanf("%d", &n);

    while(a <= n)
    {
        printf("%d ", a);
        b = b + a;
        a = a + 1;
        

    }
    printf("%d", b);
    return 0;

}