#include <stdio.h>
int main()
{
    int n, m = 1;
    while(1){
        scanf("%d",&n);
        if(n > 99){
            printf("프로그램을 종료합니다.\n");
            break;
        }
        m = 1;
        while (m < 10){
            printf("%d * %d = %d\n", n, m, n*m);
            m++;
        }
    }
    return 0;
}