#include<stdio.h>

int main()
{
    float sum1,sum2;
    const float x = 1.0;
    int n,sign;
    printf("Please input num n: ");
    while ((1 == scanf("%d",&n)) && (n > 0))
    {
        sum1 = 0.0;
        sum2 = 0.0;

        for (int i = 1,sign = 1; i <= n; i++,sign=-1*sign)
        {
            sum1 += x/i;
            sum2 += sign*x/i;
        }
        printf("sum1 is %.5f,sum2 is %.5f\n",sum1,sum2);
        printf("Please input next num: ");
    }
    
    printf("\n");

    return 0;
}