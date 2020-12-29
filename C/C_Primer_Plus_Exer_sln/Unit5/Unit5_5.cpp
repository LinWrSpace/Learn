#include<stdio.h>

int main(){
    int num;
    int count = 0;
    int sum = 0;
    printf("please input num: ");
    scanf("%d", &num);
    while (++count <= num)
    {
        sum = sum + count;
    }
    printf("The sum is %d\n", sum);    

    return 0;
}