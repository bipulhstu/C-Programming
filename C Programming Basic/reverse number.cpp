#include<iostream>
using namespace std;
int main()
{
    int n, rev=0;
    cout<<"Enter a number to find reverse:"<<endl;
    cin>>n;
    while(n!=0)
    {
        rev=rev*10;
        rev=rev+n%10;
        n=n/10;
    }
    cout<<"Reverse number is:"<<rev<<endl;
    return 0;
}
