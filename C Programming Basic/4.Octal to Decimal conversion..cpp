///C program to convert Octal number to Decimal number
#include<iostream>
#include<math.h>
using namespace std;
long octalToDecimal(long n);
int main()
{
    long octal;
    cout<<"Enter a octal number: ";
    cin>>octal;
    cout<<"Decimal number of "<<octal<<" is "<<octalToDecimal(octal)<<endl;

    return 0;
}
///function to convert octal number to decimal number
long octalToDecimal(long n)
{
    int remainder;
    int decimal=0, i=0;
    while(n!=0)
    {
        remainder=n%10;
        n=n/10;
        decimal=decimal+(remainder*pow(8,i));
        i++;
    }
    return decimal;
}


