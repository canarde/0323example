#include <stdio.h>
int main(void){
    int a, b;   //정수형 변수 a, b 선언
    char ch;       //연산기호를 저장하기 위한 문자형 변수 ch 선언
    scanf("%d", &a);    //첫 번째 정수 입력 받음
    scanf(" %d", &b);// 두 번째 정수 입력 받음
    scanf(" %c", &ch); //연산 기호 입력 받음
//연산기호에 맞는 출력문을 호출하는 조건문
    switch(ch)
    {
        case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
        case '-':
        printf("%d - %d = %d\n", a, b, a - b);
         break;
        case '*':
        printf("%d * %d = %d\n", a, b, a * b);
         break;
        case '/':
        printf("%d / %d = %d\n", a, b, a / b);
         break;
        default:
            printf("연산자가 +, -, *, / 가 아닙니다.\n");
            break;      
    }
    return 0;
}