#include<stdio.h>
int main()
{
    int t, lcm, a, b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        lcm=a*b/gcd(a,b);
        printf("LCM = %d\n",lcm);
    }
}
int gcd(int a, int b)
{
    int temp;
    //if(a>b)
       // gcd(b,a);
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
