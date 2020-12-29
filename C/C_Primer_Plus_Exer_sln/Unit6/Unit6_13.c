#include<stdio.h>
#include<math.h>

int main()
{
    int array[8],i,k;
/*
    for (i = 0,k = 1; i < 8; i++,k*=2)
    {
        array[i] = k;
    }
*/
    for (i=0; i<8; i++)
    {
        array[i] = pow(2,i);
    }

    i = 0;
    do
    {
        printf("%d ",array[i]);
    }while(++i<8);

    printf("\n");

    return 0;
}