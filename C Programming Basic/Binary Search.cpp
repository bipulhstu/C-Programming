#include<iostream>
using namespace std;
int main()
{
    int first,last, mid, key, s;
    int a[13]={12, 14, 15, 16, 30, 36, 40, 45, 50, 55, 60, 66, 69};
    first=0; s=13; last=12; key=12;
    do{
        mid=(int)((first+last)/2);
        cout<<"Start:\t"<<first<<"\tEnd:\t"<<last<<"\tMid:\t"<<mid<<"\tkey:\t"<<key<<endl;
        if(a[mid]==key){
            cout<<key<<" found in "<<mid+1<<" position"<<endl;
            break;
        }
        else if(key<a[mid])
        {
            last=mid-1;

        }
        else if(a[mid]<key)
        {
            first=mid+1;
        }
    }
    while(first<=last);
    if(first>last)
        cout<<key<<" is not found int the array."<<endl;
    return 0;
}
