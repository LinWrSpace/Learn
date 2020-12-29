#include<stdio.h>

int main()
{
    const float MassWaterMolecules = 3.0E-23f;
    int MasQuart = 950;
    printf("Please input num of Quart:");
    int num;
    scanf("%d", &num);

    printf("Display the num of water molecules is %e\n", num*MasQuart/MassWaterMolecules);

    return 0;
}