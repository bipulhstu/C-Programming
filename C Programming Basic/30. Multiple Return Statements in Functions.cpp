#include<iostream>
using namespace std;
bool check(int);
int main()
{
    if(check(20))
        cout<<"You are adult"<<endl;
    else
        cout<<"You are a kid"<<endl;
    return 0;
}
bool check(int age)
{
    if(age>=18)
        return true;
    else
        return false;
}
