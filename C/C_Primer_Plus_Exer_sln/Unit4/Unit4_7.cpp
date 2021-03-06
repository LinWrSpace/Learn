#include<stdio.h>
#include<float.h>

int main()
{
    double a = 1.0/3.0;
    float b = 1.0/3.0;
    printf("double a=1.0/3.0:\n");
    printf("%.4e\n",a);
    printf("%.12e\n",a);
    printf("%.16e\n\n",a);

    printf("double a=1.0/3.0:\n");
    printf("%.4f\n",a);
    printf("%.12f\n",a);
    printf("%.16f\n\n",a);

    printf("float b=1.0/3.0:\n");
    printf("%.4e\n",b);
    printf("%.12e\n",b);
    printf("%.16e\n\n",b);

    printf("float b=1.0/3.0:\n");
    printf("%.4f\n",b);
    printf("%.12f\n",b);
    printf("%.16f\n\n",b);

    printf("FLT_DIG:%d\n",FLT_DIG);
    printf("DBL_DIG:%d\n",DBL_DIG);

    return 0;
}