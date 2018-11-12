#include<stdio.h>
int main()
{
    int divisor, dividend, remainder, a, b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    dividend= a>=b? a: b;
    divisor= a<=b? a: b;
    while(divisor!=0)
    {
        remainder=dividend%divisor;
        dividend=divisor;
        divisor=remainder;
    }
    printf("GCD of a and b is : %d\n",dividend);
    return 0;
}
