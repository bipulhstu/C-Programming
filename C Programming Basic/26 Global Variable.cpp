///Global variable declaration
#include<iostream>
using namespace std;
void display();
int x=100;     ///Global Variable
int main()
{
    cout<<x<<endl; ///using global variable
    display();
    return 0;
}
void display()
{
    cout<<x<<endl;   ///using global variable
}

