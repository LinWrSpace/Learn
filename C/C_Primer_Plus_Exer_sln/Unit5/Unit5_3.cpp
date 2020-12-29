#include<stdio.h>

const int PerWeekDays = 7;

int main()
{
    int DayNum;
    printf("Please input days num:\n");
    scanf("%d",&DayNum);
    while(DayNum > 0)
    {
        printf("%d days are %d weeks, %d days\n",DayNum,DayNum/PerWeekDays,DayNum%PerWeekDays);
        printf("Please input days num:\n");
        scanf("%d",&DayNum);
    }
    return 0;
}