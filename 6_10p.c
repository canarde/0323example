#include <stdio.h>

int main()
{
    char str1[]= "My string";
    char * str2 = "Your string";
    printf("%s %s \n", str2, str2);

    str2 = "Our string";
    printf("%s %s \n", str1, str2);

    str1[0]='X';
    //str2[0]='X';   //오류
    printf("%s %s \n", str1, str2);
    return 0;
}