#include<stdio.h>

int main()
{
    int array_a[20];
    int index;
    for (index = 0; index < 8; index++)
    {
        scanf("%d",&array_a[index]);
    }

    for (int j = index - 1;j >= 0; j--)
    {
        printf("%d ",array_a[j]);
    }
    printf("\n");   

    return 0;
}
