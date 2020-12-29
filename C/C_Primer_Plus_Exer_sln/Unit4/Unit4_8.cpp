#include<stdio.h>
#define MILE 1.609
#define GALLON 3.785

int main()
{
    printf("Please in put mile and gallon: \n");
    float mileage,vol_gas;
    scanf("%f %f",&mileage,&vol_gas);
    printf("%.1f\n",mileage/vol_gas);
    printf("%.1f\n",mileage*MILE/vol_gas*GALLON/100);
    return 0;
}