#include<stdio.h>
int main()
{
    int n;

    printf("Please enter a number: ");
    scanf("%d",&n);
    if(n & 1)
        printf("%d is an odd number.\n",n);
    else
        printf("%d is an even number.\n", n);

    return 0;
}
