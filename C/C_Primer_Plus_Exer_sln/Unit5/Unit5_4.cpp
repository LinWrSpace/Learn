#include<stdio.h>

int main()
{
    float cent,inch,ichs;
    int feet;
    const float rate = 2.54;

    printf("enter a height in centimeters: ");
    scanf("%f", &cent);

    while (cent > 0)
    {
        inch = cent/rate;
        feet = inch/12;
        ichs = inch - 12*feet;
        printf("%.1f cm = %d feet, %.1f inches\n", cent,feet,ichs);
        printf("enter a height in centimeters (<=0 to quit): \n");
        scanf("%f", &cent);
    }
    
    printf("bye\n");
    return 0;
}