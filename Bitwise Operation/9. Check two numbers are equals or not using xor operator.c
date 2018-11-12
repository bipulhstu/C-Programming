#include<stdio.h>
int main()
{
    int n, m;
    printf("Please enter two numbers: ");
    scanf("%d %d",&n , &m);
    if(n ^ m) ///returns 1 if numbers are not equal
        printf("Numbers are not equal.\n");
    else
        printf("Numbers are equal.\n");

    return 0;
}
