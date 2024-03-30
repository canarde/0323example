#include <stdio.h>
int main(void)
{
    int inputNum;
    scanf("%d", &inputNum);
    for(int i = 1; i <= inputNum; i++)
    {
        int cnt = 0;
        for(int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }
        if (cnt == 2){
                printf("%d ", i);
            }
    }
    return 0;
}