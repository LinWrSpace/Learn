#include<stdio.h>

#define PER_H_M 60

int main()
{
    int min;
    printf("Please input minutes:\n");
    scanf("%d",&min);
    while(min > 0)
    {
        printf("Hour time is %d, Min time is %d\n",min/PER_H_M,min%PER_H_M);
        printf("Please input minutes:\n");
        scanf("%d",&min);
    }
    return 0;
}