#include<stdio.h>

void PrintSmile(void);

void PrintSmile(void)
{
    printf("Smile!");
}

int main(void)
{
    for(int i = 3; i > 0; i--){
        for(int j = i; j > 0; j--){
            PrintSmile();
        }
        printf("\n");
    }
    return 0;
}