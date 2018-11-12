#include<iostream>
using namespace std;
const int MAX=3;
int main()
{
    int var[3]={10, 20, 30};
    int *ptr; ///pointer variable declaration

    ptr=&var[MAX-1];  ///store the address of var in ptr variable

    for(int i=MAX; i>0;  i--)
    {
        cout<<"Address of var["<<i<<"] is :";
        cout<<ptr<<endl;

        cout<<"Value of var["<<i<<"] is :";
        cout<<*ptr<<endl;

        ptr--; /// point to previous location
    }
    return 0;
}

