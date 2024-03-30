#include <stdio.h>
int main(void){
    for(int i =0; i < 4; i++)
    {
        for(int j = 3-i; j > 0 ; j--){// 3-i(0) = 3, 3-i(1) = 2, 3 - i(2) = 1
            printf(" ");
        }
        for(int j = 0; j < i + 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}