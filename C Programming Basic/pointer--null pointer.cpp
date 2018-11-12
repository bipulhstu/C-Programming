///Null pointer
#include<iostream>
using namespace std;
int main()
{
    int *ptr=NULL;  ///NULL pointer declaration
    /// if(ptr) succeeds if ptr is not null
    /// if(!ptr) succeeds if ptr is null

    cout<<"The value of ptr is : ";
    cout<<ptr<<endl;

    return 0;
}
