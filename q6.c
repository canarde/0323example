#include <stdio.h>
int main(void){
    int inputNum = 0, num = 1; //자연수 = 양의 정수
    scanf("%d", &inputNum); // 자연수 입력
    if(inputNum > 0)
    {//입력받은 줄만큼 숫자를 출력
        
        for(int i = 1; i < inputNum+1; i++)
        {
            //각 라인 출력
            for(int j = 0; j < i; j++)
            {
                printf("%-2d ", num);
                num++;
            }
            printf("\n");
        }
    }
   return 0;
}