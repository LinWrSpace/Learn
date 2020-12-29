#include<stdio.h>

int main()
{
    int lower, upper, sum;
    printf("Please input lower and upper integer limits: ");
    while ((2 == scanf("%d %d",&lower,&upper)) && (lower < upper))
    {
        sum = 0;
        for (int i = lower; i <= upper; i++)
        {
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %d\n",lower,upper,sum);
        printf("Please input next set of limits(if lower not less than upper,the program will quit): ");
    }
    
    printf("\n");

    return 0;
}

