#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={2,4, 5,7, 1, 8, 0}, i;
    for(i=0; i<7; i++)
        cout<<arr[i]<<" ";
        cout<<endl;

    sort(arr, arr+7);
    for(i=0; i<7; i++)
        cout<<arr[i]<<" ";
}
