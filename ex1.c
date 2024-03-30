#include <stdio.h>
int main(void)
{
    int i, a = 1;
    for (i = 0; i < 15; i++)
    {
        printf("%d ", a++);
    }
    printf("\n");
    return 0;
}