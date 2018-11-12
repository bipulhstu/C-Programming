#include<stdio.h>
int main()
{
    int num, binary_val, decimal_val=0, base=1, remainder;
    printf("Enter a number: ");
    scanf("%d",&num);
    binary_val=num;
    while(num!=0)
    {
        remainder=num%10;
        decimal_val=decimal_val+remainder*base;

        base=base*2;
        num=num/10;
    }
    ///lo for octal
    printf("Decimal number of %d is %lo\n",binary_val,decimal_val);
    return 0;
}

