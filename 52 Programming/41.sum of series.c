#include<stdio.h>
#include<math.h>
int main()
{
    long long int i, n;
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld",&n);
        double sum=0.0;
        for(i=1; i<=n; i++)
        {
           sum+=((double)i/factorial(i));
        }
        printf("%.4lf\n",sum);
    }
    return 0;
}
int factorial(long long int n)
{
    long long int i,product=1;
    for(i=1; i<=n; i++)
        product=product*i;
    return product;
}
