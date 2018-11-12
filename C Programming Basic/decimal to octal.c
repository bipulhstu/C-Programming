#include<stdio.h>
int main()
{
    int num, octal=0, decimal_num, base=1, remainder;
    printf("Enter a number: ");
    scanf("%d",&num);
    decimal_num=num;
    while(num>0)
    {
        remainder=num%8;
        octal=octal+remainder*base;
        num=num/8;
        base=base*10;
    }
    printf("Octal number of %d is %d\n",num,octal);
    return 0;
}
