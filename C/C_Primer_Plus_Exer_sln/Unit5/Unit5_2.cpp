#include<stdio.h>

int main()
{
    int num;
    printf("Please input num:\n");
    scanf("%d",&num);
    int i = num;
    while (num <= i + 10)
    {
        printf("%d ",num++);
    }

    printf("\n");
    
    return 0;
}