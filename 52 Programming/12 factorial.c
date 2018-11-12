#include <stdio.h>
int trailFactorialZero(int n)
{
    int result=0;
    int m=5;
    while(n>=m)
    {
        result=result+n/m;
        m=m*5;
    }
    return result;
}
int main()
{
    int t, i, num;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&num);
        printf("%d\n",trailFactorialZero(num));
    }
    return 0;
}
