#include<stdio.h>
int main()
{
    char str1[100] = "My name is Bipul Islam";
    char str2[100];

    strcpy(str2, str1);

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
}
