#include <stdio.h>
int main(void){
    int num;
    scanf("%d", &num);
    for ( num; num >= 1; num--){
        printf("%d", num);
        printf("\n");
    }
    return 0;
}