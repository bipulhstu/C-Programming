///C program to convert Decimal number to Binary number
#include<iostream>
using namespace std;
long decimalToBinary(long n);
int main()
{
    long decimal;
    cout<<"Enter a decimal number: ";
    cin>>decimal;
    cout<<"Binary number of "<<decimal<<" is "<<decimalToBinary(decimal)<<endl;

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
