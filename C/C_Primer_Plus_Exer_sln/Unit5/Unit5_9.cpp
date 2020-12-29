#include<stdio.h>

void Temperatures(double val);
const double Temconv = 273.16;

int main()
{
    double f_temper;
    printf("Please input huawen: ");
    while (scanf("%lf",&f_temper) == 1)
    {
        Temperatures(f_temper);
    }
    
    return 0;
}

void Temperatures(double val)
{
    printf("Huawen is %.2f, shewen is %.2f, kaiwen is %.2f\n",val,5.0/9.0*(val-32.0),5.0/9.0*(val-32.0)+Temconv);
}