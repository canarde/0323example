#include "func_test.h"

int main(void)
{
    int num = 0, sum = 0;
    int abs = 0;
    for(int i =0; i<5; i++){
        printf("input : ");
        scanf("%d", &num);
        abs= Abs(num);
        sum = sum + abs;
    }
    printf("%d", sum);
    return 0;
}