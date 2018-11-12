///C program to convert Decimal number to Binary number
#include<stdio.h>
#include<conio.h>
long decimalToBinary(long n);
int main()
{
    long decimal;

    printf("Enter a decimal number:\n");
    scanf("%ld",&decimal);
    printf("Binary number of %ld is %ld\n",decimal,decimalToBinary(decimal));

    return 0;
}
///function to convert decimal number to binary number
long decimalToBinary(long n)
{
    int remainder;
    int binary=0, i=1;
    while(n!=0)
    {
        remainder=n%2;
        n=n/2;
        binary= binary+(remainder*i);
        i=i*10;
    }
    return binary;
}
