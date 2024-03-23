///구구단/// 조건 3가지:초기값 조건값 증분값(반복문 내부에)
#include <stdio.h>
int main()
{
    int cur=2;
    int is=0;

    while(cur<10)
    {
        is=1;
        while(is<10)
        {
            printf("%d*%d=%d\n", cur, is, cur*is);
            is++;
        }
        cur++;
    }
    return 0;
}