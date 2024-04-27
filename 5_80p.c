#include <stdio.h>

int main()
{
    int num[4][7] = { 0 };
    int i, j;
    for(i=0; i< 4; i++){
        printf("%d번째 학생 점수 입력: ", i+1);
        for(j=0; j<4; j++){
            scanf("%d", &num[i][j]);
            num[i][4] += num[i][j];
        }
        num[i][5] = (float)num[i][4]/4;
        num[i][6] = ( num[i][5] >= 90) ? 0 : 1;
    }
    printf("국어 영어 수학 과학 총점 평균 P/F \n");
    for(i=0; i<4; i++){
        for(j=0; j<7; j++){
            printf("%4d ", num[i][j]);
        }
        printf("\n");
    }
    return 0;
}