#include<stdio.h>

int main()
{
    float SecPerYear = 3.156E7f;
    int Age;
    printf("Please input your age:");
    scanf("%d", &Age);
    printf("Totle sec is %e\n", Age*SecPerYear);

    return 0;
}