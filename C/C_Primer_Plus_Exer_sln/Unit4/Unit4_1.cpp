#include<stdio.h>

int main()
{
    printf("Please input your first name and second name:\n");
    char strfirstname[20];
    char strsecondname[20];
    scanf("%s %s",strsecondname,strfirstname);
    printf("%s\n",strsecondname);
    printf("%s,%s\n",strsecondname,strfirstname);
    return 0;
}