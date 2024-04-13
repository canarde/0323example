#include "func_test.h"

int NumberCompare(int num1, int num2)
{
        if (num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}
//14p_ex2
int AbsoCompare(int num1, int num2)
{
    if (GetAbsoValue(num1) > GetAbsoValue(num2))
    {
        return num1;
    }
    else{
        return num2;
    }
}

int GetAbsoValue(int num)
{
    if(num < 0)
    {
        return num * (-1);
    }
    else{
        return num;
    }
}
//15p
int sum(int x, int y){
    int result;
    result = x + y;
    return result;
}
//19p
int minus(int x, int y){
    int result;
    result = x - y;
    return result;
}

int times(int x, int y){
    int result;
    result = (x*y);
    return result;
}
//20p
void n2n(int dan){

    for(int i=1; i<=9; i++){
        printf("%d X %d = %2d\n", dan, i, dan * i);
    }
}
//22p
void gugudan(){
    for (int i=1; i <=9; i++){
        for (int j=2; j<=9; j++){
            printf("%d X %d = %2d%4s", j, i, j * i, " ");//%4s 4칸 비움
        }
        printf("\n");
    }
}
//23p
int more(int num){
    int big;
    big = num + 10;
    return big;
}

int less(int num){
    int small;
    small = num - 10;
    return small;
}
//27p
void plus(int num1, int num2)
{
    printf("두 수의 합은 %d 입니다.\n", num1+num2);
}

void ab_minus(int num1, int num2)
{
    printf("두 수의 차는 %d 입니다.\n", num1>num2?num1-num2:num2-num1);
}
//28p
int Abs(int num){
    if (num<0){
        return num*(-1);
    }
}
//29p
int X(int num){
    return num * num;
}
//37p
int SimpleFuncOne(void)
{
    int num=10;
    num++;
    printf("SimpleFuncOne num: %d \n", num);
    return 0;
}

int SimpleFuncTwo(void)
{
    int num1=20;
    int num2=30;
    num1++, num2--;
    printf("num1 & num2: %d %d \n", num1, num2);
    return 0;
}
//39p
void Add(int val)
{
    num += val;
}
//static.c
void SimpleFunc(void){
    static int num1=0;
    int num2=0;
    num1++, num2++;
    printf("static: %d, local: %d \n", num1, num2);
} 
//static_ex.c
void f1(void){
    int b = 40;
    a = 30;
    printf("f1()에서의 a의 값은 : %d\n", a);
    printf("f1()에서의 b의 값은 : %d\n", b);
}
//star1.c
void stamp(int num)
{
    for (int i=1; i <= num; i++){
        for (int j=1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    } 
}
//second2hour.c
void time(int sec){
    int hh;
    if (sec / 3600 >= 1 ){
        hh = sec / 3600;
    } 
    int h, mm;
    h = sec - (hh * 3600);
    mm = h / 60;
    ss = h % 60;
    printf("%02d시간%02d분%02d초 입니다.\n", hh, mm, ss);
}
