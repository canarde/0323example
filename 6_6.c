#include <stdio.h>
int main(void){
    for (int i = 1; i <= 100; i++){//hint 1
        if (i / 10 == 3 || i / 10 ==6 || i / 10 == 9){
            printf("짝");
            if(i % 10 == 3 || i % 10 ==6 || i % 10 == 9){
                printf("짝");
            }
            printf("\n");
        }
        else {
            if (i % 10 == 3 || i % 10 ==6 || i % 10 == 9)
            {
            printf("짝");
            }
            else{
                printf("%d", i);
            }
            printf("\n");
        }
    }
    return 0;
}