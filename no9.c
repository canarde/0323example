#include <stdio.h>

int main(void)
{
    int n = 1;
    double sum = 0.0;
    double count = 0.0;
    double avg;

    while(n != 0)
    {
        scanf("%d", &n);
        if(n % 2 == 1)
        {
            sum = sum + n;
            count = count + 1;
        }
    }
    printf("%.f\n", sum);
    avg = sum / count;
    printf("%.2f\n", avg);
    return 0;
}