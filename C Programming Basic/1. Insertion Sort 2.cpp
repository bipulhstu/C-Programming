#include<iostream>
using namespace std;
int main()
{
    int i, j, x, t, num[100];
    cout<<"Enter number of elements of array:"<<endl;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>num[i];
    }
    for(i=0; i<t; i++)
    {
        x=num[i];
        j=i-1;
        while(j>=0 && num[j]>x)
        {
            num[j+1]=num[j];
            j--;
        }
        num[j+1]=x;
    }
    for(i=0; i<t; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}
