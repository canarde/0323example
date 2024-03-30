#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for(int div = 1; div <= n; div++){
        int cnt = 0;
        for(int i = 1; i <= div; i++){
            if (div % i == 0){
                cnt++;
            }
        }
        if (cnt == 2){
                printf("%d ", div);
            }
    }
    return 0;
}