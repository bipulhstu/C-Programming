///C program to convert Decimal number to Octal number
#include<iostream>
using namespace std;
long decimalToOctal(long n);
int main()
{
    long decimal;
    cout<<"Enter a decimal number: ";
    cin>>decimal;
    cout<<"Octal number of "<<decimal<<" is "<<decimalToOctal(decimal)<<endl;

    return 0;
}
///function to convert decimal number to octal number
long decimalToOctal(long n)
{
    int remainder;
    int octal=0, i=1;
    while(n!=0)
    {
        remainder=n%8;
        n=n/8;
        octal=octal+(remainder*i);
        i=i*10;
    }
    return octal;
}

