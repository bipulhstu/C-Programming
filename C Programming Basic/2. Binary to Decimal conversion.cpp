///C program to convert Decimal number to Binary number
#include<iostream>
#include<math.h>
using namespace std;
long binaryToDecimal(long n);
int main()
{
    long binary;
    cout<<"Enter a decimal number: ";
    cin>>binary;
    cout<<"Binary number of "<<binary<<" is "<<binaryToDecimal(binary)<<endl;

    return 0;
}
///function to convert decimal number to binary number
long binaryToDecimal(long n)
{
    int remainder;
    int decimal=0, i=0;
    while(n!=0)
    {
        remainder=n%10;
        n=n/10;
        decimal=decimal+(remainder*pow(2,i));
        i++;
    }
    return decimal;
}

