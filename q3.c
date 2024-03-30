#include <stdio.h>
int main(void)
{
    int num = 0;
    while(1)
    {
    scanf("%d", &num);
    if(num <= 100)
    {
        int sum =0;
        for(int i = 1; i < num+1; i++)
        {
            if (i % 5 == 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
    else{
        break;
    }
    }
    return 0;
}