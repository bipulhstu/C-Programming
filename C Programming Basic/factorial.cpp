#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i, N, f=1;
    scanf("%d", &N);
    for(i=1;i<=N;i++)
    {
        f=f*i;
    }
    cout<<f<<endl;
    return 0;
}
