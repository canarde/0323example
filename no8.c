#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;
    int n =1;
    scanf("%d", &num);
    
    if(num <= 100)
    {
        while(n <= num)
        {
            printf("%d ", n);
            sum = sum + n;
            n = n + 1;
        } 
        printf("%d", sum);       
    }
    else{
        printf("잘못 입력하셨습니다.");
    }
    return 0;
}