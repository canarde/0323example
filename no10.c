#include <stdio.h>

int main(void)
{
    int num = 1 ;
    while(num != 0){
        scanf("%d", &num);
        if(num % 2 == 1){
            printf("홀수입니다.\n");
        }
        else{
            printf("짝수입나다.\n");
        }
    }
    return 0;
}