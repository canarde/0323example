#include <stdio.h>
int main(void)
{
    int n, m, i;
    scanf("%d %d", &n, &m);
    //1부터 100까지의 수 중 공배수를 찾기 위한 반복문
    for (i = 1; i<= 100; i++)
    {
        //공배수 판별 조건문
        if (i % n == 0 && i% m == 0 )
        {
            printf("%d ", i);
        }
    }
    return 0;
}