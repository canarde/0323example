#include <stdio.h>
int main()
{
    int num = 0, n = 1;
    while(1)
    {
        scanf("%d", &num);
        if (num > 100) break;
        // 입력 받는 값의 약수에 해당하는 수를 출력
        while (num+1 != n)
        {
            if(num%n == 0){
                printf("%d ", n);
            }
            
            n++;
        }
    }
    return 0;
}