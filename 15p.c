#include "func_test.h"

int main(void)
{
    int res, input1, input2;
    scanf("%d %d", &input1, &input2);
    res = sum(input1, input2);
    printf("%d 과(와) %d의 합은 %d 입니다\n", input1, input2, res);
    return 0;
}