#include<stdio.h>
#include<string.h>

int main()
{
    printf("Please input your name:\n");
    char StrSecondName[20];
    char StrFirstName[20];
    int LengthSec = 0;
    int LengthFir = 0;
    scanf("%s %s", StrSecondName,StrFirstName);
    //a
    printf("\"%s,%s\"\n",StrSecondName,StrFirstName);
    //b
    printf("\"%20s,%20s\"\n",StrSecondName,StrFirstName);
    //c
    printf("\"%-20s,%-20s\"\n",StrSecondName,StrFirstName);
    //d
    LengthSec = strlen(StrSecondName);
    LengthFir = strlen(StrFirstName);
    printf("\"%*s,%*s\"\n",LengthSec+3,StrSecondName,LengthFir+3,StrFirstName);
    return 0;
}