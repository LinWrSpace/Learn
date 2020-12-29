#include<stdio.h>

double GetCubeValue(double value);

int main()
{
    double num;
    printf("please input a double num: ");
    scanf("%lf", &num);
    printf("The Cube Value is %f\n", GetCubeValue(num));
    return 0;
}

double GetCubeValue(double value)
{
    return value*value*value;
}