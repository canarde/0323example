#include <stdio.h>
int main(void)
{
    int num = 0;
    scanf("%d", &num);
    if(num <= 100)
    {
        for(int i = 1; i < num+1; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}