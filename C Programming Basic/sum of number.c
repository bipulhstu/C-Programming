#include<stdio.h>
int main()
{
    int a, sum=0;
    printf("Enter a positive integer number:");
    scanf("%d", &a);
    while(a)
    {
        sum+=a%10;
        a=a/10;
    }
    printf("Sum is %d\n", sum);
    return 0;
}
