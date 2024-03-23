#include <stdio.h>
int main()
{
    int num, times = 0, count = 1;
    while(1){
        scanf("%d", num);
        if (num < 1 || num > 9) break;
        times = num*3;
        while(times!=num){
                if (times >= 10){
                    num = times % 10 * 3;
                    count = count + 1;
                }
        }  
    }
}