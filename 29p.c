#include "func_test.h"

int main(void){
    int num1, num2;
    printf("정수 입력 : ");
    scanf("%d %d", &num1, &num2);
    int a=0, b=0;
    a = X(num1);
    b = X(num2);
    printf("%d",  num1>num2?a - b: b - a);
    return 0;
}