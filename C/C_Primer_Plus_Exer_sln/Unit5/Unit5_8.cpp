#include<stdio.h>

int main()
{
    int FirOperVal, SecOperVal;
    printf("Please input seccond operand: ");
    scanf("%d", &SecOperVal);
    printf("Please input first operand: ");
    scanf("%d", &FirOperVal);
    printf("%d %% %d is %d\n",FirOperVal,SecOperVal,FirOperVal%SecOperVal);
    while (1)
    {
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &FirOperVal);
        if (FirOperVal <= 0)
        {
            break;
        }
        printf("%d %% %d is %d\n",FirOperVal,SecOperVal,FirOperVal%SecOperVal);
    }
    
    return 0;
}