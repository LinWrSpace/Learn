#include<stdio.h>
#include<string.h>

int main()
{
    char first_name[20];
    char last_name[20];

    int length_first_name;
    int length_last_name;

    printf("Please input your first name: ");
    scanf("%s",first_name);
    printf("Please input your last name: ");
    scanf("%s",last_name);

    length_first_name = strlen(first_name);
    length_last_name = strlen(last_name);

    printf("%s %s\n",first_name,last_name);
    printf("%*d %*d\n",length_first_name,length_first_name,length_last_name,length_last_name);
    printf("%s %s\n",first_name,last_name);
    printf("%-*d %-*d\n",length_first_name,length_first_name,length_last_name,length_last_name);

    return 0;
}