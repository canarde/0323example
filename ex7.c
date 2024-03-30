#include <stdio.h>
int main(void){
    int num, i;
    int min, max;
    for (i = 0; i < 5; i++){
        scanf("%d", &num);
        if (i == 0){
            min = num;
            max = num;
        }
        else if (min > num){
            min = num;
        }
        else if (max < num){
            max = num;
        }
    }
    printf("MIN : %d\nMAX : %d\n", min, max);
    return 0;
}