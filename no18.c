#include <stdio.h>
int main()
{
    int num, n=1;
    while(1)
    {
        scanf("%d", &num);
        if (num > 100){
            printf("프로그램을 종료합니다.\n");
            break;
        }
        while (num >= n)
        {
            if(num % n == 0){
                printf("%d ", n);
            }
            n++;
        }
    }
    return 0;
}