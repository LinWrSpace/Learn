#include<stdio.h>

int main()
{
    char name[20];
    float height;
    printf("Please input your name:\n");
    scanf("%s",name);
    printf("Please input your height(inch):\n");
    scanf("%f",&height);
    printf("%s, you are %.3f cm tall\n",name,height*2.54);
    return 0;
}