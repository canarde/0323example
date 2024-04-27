#include <stdio.h>

int main()
{
    int rows = 4;
    int cols = 5;
    int num[rows][cols];
    int cnt = 1;
    /*수 입력*/
    for(int i=0; i<rows; i++){
        /*1, 3번쨰 줄*/
        if(i%2 == 0){
            for(int j=0; j<cols; j++){
                num[i][j] = cnt++;
            }
        }
        /*2, 4번쨰 줄*/
        if(i%2 != 0){
            for(int j=(cols-1); j>=0; j--){
                num[i][j] = cnt++;
            }
        }
    }
    /*출력*/
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%2d ", num[i][j]);
        }
        printf("\n");
    }
    return 0;
}