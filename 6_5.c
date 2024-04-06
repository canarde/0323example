#include <stdio.h>
int main(void){
    int num=0;
    scanf("%d", &num);
    for (int i = num; i <= 100; i++){//hint 1
        if ( i % num == 0){//hint2
            printf("%d ", i);
        }
    }
    return 0;
}