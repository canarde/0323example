#include <stdio.h>
int main(void){
    int i, j;
//구구단
    for(i =0; i < 4; i++){//바깥 반복문 i는 0부터 3까지 총 4번 반복
        for(j = 0; j < i+1 ; j++){//i는 반복할 때마다 1씩 증가
            printf("*");
        }//한 줄을 출력하려고 줄 바꿈
        printf("\n");
    }
    return 0;
}