#include "func_test.h"

int NumberCompare(int num1, int num2)
{
        if (num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}

void Swap(int * ptr1, int * ptr2)
{
    int temp= *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    
}