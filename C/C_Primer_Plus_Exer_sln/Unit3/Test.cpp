#include<stdio.h>
#include<stdint.h>

int main(void)
{
    printf("Type int has a size of %zd bytes\n", sizeof(int));
    printf("Type char has a size of %zd bytes\n", sizeof(char));
    printf("Type short has a size of %zd bytes\n", sizeof(short));
    printf("Type long has a size of %zd bytes\n", sizeof(long));
    printf("Type long long has a size of %zd bytes\n", sizeof(long long));
    printf("Type float has a size of %zd bytes\n", sizeof(float));
    printf("Type double has a size of %zd bytes\n", sizeof(double));
    printf("Type long double has a size of %zd bytes\n", sizeof(long double));
    printf("Type long double has a size of %zd bytes\n", sizeof(long double));
//    printf("Type _Bool has a size of %zd bytes\n", sizeof(__BOOL_DEFINED));
//    printf("Type _Bool has a size of %zd bytes\n", sizeof(_Bool));

    _Bool b = 1;


    return 0;
}
