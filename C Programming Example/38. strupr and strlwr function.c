#include<stdio.h>
int main()
{
    char str1[15] = "Bangladesh";

    strupr(str1);
    printf("Upper = %s\n", str1);

    strlwr(str1);
    printf("Lower = %s\n", str1);

    return 0;
}
