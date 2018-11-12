///Author Bipul Islam
///Programming Assignment 1.4: Count Digit
#include<stdio.h>
int main()
{
    int count=0, digit , number, rem=0;
    scanf("%d%d",&number,&digit);
    while(number!=0)
    {
        rem = number%10;
        if(rem == digit)
            count++;
        number/=10;
    }
    printf("%d\n",count);

    return 0;
}
