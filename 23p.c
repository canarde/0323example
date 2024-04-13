#include "func_test.h"
int main(void)
{
    int num, small;
    printf("정수입력 : ");
    scanf("%d", &num);    
    small = less(num);
    printf("10 큰 수 : %d\n10 작은 수 : %d", more(num), small );
    return 0;
}