#include <stdio.h>

int main()
{
    int i, j, num[4][5] = { 0 };
    for(i=0; i< 4; i++){
        printf("%d번째 학생 점수 입력: ", i+1);
        for(j=0; j<4; j++){
            scanf("%d", &num[i][j]);
            num[i][4] += num[i][j];
        }
    }
    printf("국어 영어 수학 과학 총점\n");
    for(i=0; i<4; i++){
        for(j=0; j<5; j++){
            printf("%4d ", num[i][j]);
        }
        printf("\n");
    }
    return 0;
}