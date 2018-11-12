#include<iostream>
using namespace std;
int main()
{
    int var=20; ///actual variable declaration
    int *ip;    ///pointer variable declaration
    ip=&var;    ///store address of var in pointer variable

    cout<<"Value of var variable is: ";
    cout<<var<<endl;

    ///print the address in ip variable
    cout<<"The address of ip variable is: ";
    cout<<ip<<endl;

    ///print the value of ip pointer variable
    cout<<"Value of ip pointer variable is: ";
    cout<<*ip<<endl;

}
