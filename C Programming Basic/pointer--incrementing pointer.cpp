#include<iostream>
using namespace std;
const int MAX=3;
int main()
{
    int var[3]={10, 20, 30};
    int *ptr; ///pointer variable declaration

    ptr=var;  ///store the address of var in ptr variable

    for(int i=0; i<MAX; i++)
    {
        cout<<"Address of var["<<i<<"] is :";
        cout<<ptr<<endl;

        cout<<"Value of var["<<i<<"] is :";
        cout<<*ptr<<endl;

        ptr++; ///incrementing next location
    }
    return 0;
}
