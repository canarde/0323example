#include <stdio.h>
int main(void){
    for (int i = 2; i <= 9; i++){
        for (int j = 1; j <= 9; j++){
            printf("%d * %d = %d", i , j, i*j);
            printf("\n");
        }
    }
    return 0;
}