#include<stdio.h>

int main()
{
    char array_a[26]; 

    for (int i = 0; i < 26; i++)
    {
        array_a[i] = 'a' + i;
        printf("%c ",array_a[i]);
    }

    printf("\n");
    
    return 0;
}