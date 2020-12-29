#include<stdio.h>

int main()
{
    char c;
    for (int i = 0,c = 'F'; i < 6; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c",c-j);
        }
        printf("\n");
    }

    return 0;
}