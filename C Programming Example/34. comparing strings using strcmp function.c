#include<stdio.h>
int main()
{
    char str1[] = "Bipul Islam";
    char str2[] = "Bipul Islam 3";

    int d = strcmp(str1, str2);

    if(d== 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}
