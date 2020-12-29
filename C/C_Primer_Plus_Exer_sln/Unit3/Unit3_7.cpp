#include<stdio.h>

int main()
{
    const float inch = 2.54f;
    printf("Plesae input your height:");
    int height;
    scanf("%d", &height);
    printf("Your height is %f cm\n", inch * height);

    return 0;
}