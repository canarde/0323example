#include "func_test.h"

int main(void)
{
    int input1, input2;
    int re_sum, re_minus, re_times;
    scanf("%d %d", &input1, &input2);
    re_sum = sum(input1, input2);
    re_minus = minus(input1, input2);
    re_times= times(input1, input2);
    printf("+ : %d \n- : %d \n* : %d", re_sum, re_minus, re_times);
    return 0;
}