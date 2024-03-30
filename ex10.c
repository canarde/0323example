#include <stdio.h>
int main(void)
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 2; i > 0; i--)
    {
        for(j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
   return 0;
}