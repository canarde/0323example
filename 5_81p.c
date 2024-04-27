#include <stdio.h>

int main()
{
    int count[26] = {0};
    char input;
    
    while(1)
    {
        scanf("%c", &input);
        if (input >= 'a' && input <= 'z')
            count[input-'a']++;
        else if (input >= 'A' && input <='Z')
            count[input-'A']++;
        else
            break;
    }
    
    for ( int i =0; i< 26; i++)
    {
        if (count[i] !=0){
            printf ("%c : %d\n", i+'A', count[i]);
        }
    }
    return 0;
}