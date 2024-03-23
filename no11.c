#include <stdio.h>

int main(void)
{
    int num = 1 ;
    while(num != 0){
        scanf("%d", &num);
        if(num % 2 == 0 && num != 0){
            printf("짝수입니다.\n");
        }
        else if(num%2 == 1){
            printf("홀수입니다.\n");
        }
    }
    return 0;
}