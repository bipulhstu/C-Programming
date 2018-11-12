#include<iostream>
using namespace std;
int main()
{
    int i, a, sum=0, value;
    cout<<"Enter the number of integers you want to add:"<<endl;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>value;
        sum=sum+value;
        ///adding each value in sum
    }
    cout<<"The sum of "<<a<<" numbers is:"<<sum<<endl;
    return 0;

}
