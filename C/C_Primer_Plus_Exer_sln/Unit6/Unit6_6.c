#include<stdio.h>

int main()
{
    int lower,uper,index;
    int square,cube;
    printf("Please enter starting integer and ending integer: ");

    while (2 == scanf("%d%d",&lower,&uper))
    {
        printf("%5s %10s %15s\n","num","square","cube");
        for(index=lower;index<=uper;index++)
        {   
            square=index*index;
            cube=index*square;
            printf("%5d %10d %15d\n",index,square,cube);
        }
        printf("Enter next pair(non-numeric to quit): \n");
    }
    return 0;
}