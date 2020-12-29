#include<stdio.h>

int main()
{
    const float ounce = 28.350f;
    printf("Please in put num of cup:");
    float CupNum;
    scanf("%f", &CupNum);
    printf("Number of pintuo: %.1f\n", CupNum/2);
    printf("Number of aounce: %.1f\n", CupNum*8);
    printf("Number of tongshao: %.1f\n", CupNum*8*2);
    printf("Number of chashao: %.1f\n", CupNum*8*2*3);

    return 0;
}