#include<stdio.h>

int main()
{
    unsigned short i = 65535;
    unsigned short j = i + 1;
    unsigned short k = j - 1;
    printf("value i = %d, valude j = %d, value k = %d\n", i, j, k);

    double a = 3.0;
    float b = 5.0;
    printf("value of a is %lf ,value of b is %f\n", a, b);

    float toobig = 3.4E38*100.0f;
    printf("%e\n", toobig);

    return 0;
}