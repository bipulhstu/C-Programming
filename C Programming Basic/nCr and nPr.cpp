///Find nCr and nPr
#include<iostream>
using namespace std;
long factorial(int);
long find_ncr(int, int);
long find_npr(int, int);
int main()
{
    long ncr, npr;
    int n, r;
    cout<<"Enter the value of n and r: ";
    cin>>n>>r;

    ncr=find_ncr(n,r);
    npr=find_npr(n,r);

    cout<<n<<"C"<<r<<" is "<<ncr<<endl;
    cout<<n<<"P"<<r<<" is "<<npr<<endl;

    return 0;
}
///function to find nCr
long find_ncr(int n, int r)
{
    long result;
    result=factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}
///function to find nPr
long find_npr(int n, int r)
{
    long result;
    result=factorial(n)/factorial(n-r);
    return result;
}
///function to find factorial
long factorial(int n)
{
    long result=1;
    int c;
    for(c=1; c<=n; c++)
        result=result*c;
    return result;
}
