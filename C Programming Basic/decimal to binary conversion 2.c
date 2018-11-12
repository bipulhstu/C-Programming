#include<stdio.h>
int main()
{
    long r, n,decimal,binary=0,base=1;
    printf("Please! Enter a number to find its binary number: ");
    scanf("%ld",&decimal);
    n=decimal;

    while(decimal>0)
    {
        r=decimal%2;
        binary=binary+r*base;
        decimal=decimal/2;
        base=base*10;
    }
    printf("Binary equivalent of %ld is: %ld\n",n,binary);

    return 0;
}

