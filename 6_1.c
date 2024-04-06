#include <stdio.h>
int main(void){
    int i, j;
    int n;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = n - i; j > 0; j--){
            printf(" ");
        }
        for (j = 0; j < (i * 2) + 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}