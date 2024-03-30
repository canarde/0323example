#include <stdio.h>
int main(void)
{
    int n, num = 1;
    scanf("%d", &n);
    if(n > 0)
    {
        for(int i=0; i < n; i++)
        {
            for( int j = 0; j < i+1 ; j++){
                printf("%-2d", num);
                num++;
            }
            printf("\n");
        }
        for (int i = n-1; i > 0; i--)
        {
            for ( int j = i; j > 0; j--)
            {
                printf("%-2d", num);
                num++;
            }
            printf("\n");
        }
    }
   return 0;
}