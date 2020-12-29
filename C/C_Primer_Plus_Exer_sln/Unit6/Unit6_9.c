#include<stdio.h>

float FuncCal(float x,float y);

int main()
{
    float a, b, c;
    printf("Please enter two float numbers(non-numeric to quit): \n");
    while(2 == scanf("%f %f",&a,&b))
    {
        c = FuncCal(a,b);
        printf("The value is %.2f\n",c);
        printf("Please enter two float numbers(non-numeric to quit): \n");
    }
    return 0;
}

float FuncCal(float x,float y)
{
    return (x - y)/(x * y);
}