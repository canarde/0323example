#include <stdio.h>
int main()
{
    int num=1;
    while(num!=100)
    {
        num +=1; 
        
        do{
            result *= 3;
            result = (result > 10) ? (result %=10) : result;
            cnt++;
        }while(result!=num);
        printf("%d",cnt);
    }
    return 0;
}