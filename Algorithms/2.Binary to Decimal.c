///C program to convert Binary number to Decimal number
#include<stdio.h>
#include<conio.h>
#include<math.h>
long binaryToDecimal(long n);
int main()
{
    long binary;

    printf("Enter a binary number:\n");
    scanf("%ld",&binary);
    printf("Decimal of %ld is %ld\n",binary,binaryToDecimal(binary));

    return 0;
}
///function to convert binary number to decimal number
long binaryToDecimal(long n)
{
    int remainder;
    int decimal=0, i=0;
    while(n!=0)
    {
        remainder=n%10;
        n=n/10;
        decimal=decimal+(remainder*pow(2,i));
        ++i;
    }
    return decimal;
}
