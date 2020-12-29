#include<stdio.h>

int main()
{
    float a, b, c;
    printf("Please enter two float numbers(non-numeric to quit): \n");
    while(2 == scanf("%f %f",&a,&b))
    {
        c = (a - b)/(a * b);
        printf("The value is %.2f\n",c);
        printf("Please enter two float numbers(non-numeric to quit): \n");
    }
    return 0;
}