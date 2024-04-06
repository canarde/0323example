#include <stdio.h>
int main(void){
    int line = 0;
    scanf("%d", &line);
    for(int i=1; i<=line; i++){
        for(int j = 0; j< (line - i); j++){
            printf(" ");
        }
        for(int j = 0; j < 2*i - 1; j++){//2n-1
            printf("*");
        }
        printf("\n");
    }
    for(int i=1; i <= line-1; i++){//3
        for(int j = line; j > (line - i); j--){//1 2 3
            printf(" ");
        }
        for(int j = 0 ; j < 2*(line - i) - 1; j++){//2n-1 5 3 1
            printf("*");
        }
        printf("\n");
    }
    return 0;
}