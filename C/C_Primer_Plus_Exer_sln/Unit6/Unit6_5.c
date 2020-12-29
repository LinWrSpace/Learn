#include<stdio.h>

int main()
{
    char ch,zifu;
    int loopflag = 1;
    int len,x,n;
    while (1 == loopflag)
    {
        printf("Please input big letter(if not big letter,please input again!): ");
        scanf("%c",&ch);
        if (ch>='A' && ch<='Z')
        {
            loopflag = 0;
        } else
        {
            loopflag = 1;
        }
    }
    
    len = ch - 'A';
    for (x = 0; x <= len; x++)
    {
        for (n = 0; n < len-x; n++)
        {
            printf(" ");
        }
        for (zifu='A'; zifu-'A' < x; zifu++)
        {
            printf("%c",zifu);
        }
        for(;zifu+1>'A';zifu--)
        {
            printf("%c",zifu);
        }
        printf("\n");
    }
    return 0;
}