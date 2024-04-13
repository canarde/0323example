#include "func_test.h"

int main(void)
{
    int x, y;
    printf("2 정수 입력 : ");
    scanf("%d %d", &x, &y);
    plus(x, y);
    ab_minus(x, y);
    return 0;
}