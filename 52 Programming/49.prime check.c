#include <stdio.h>
#include <math.h>
int is_prime(long long int n)
{
    int i, root;
    if(n == 2)
    {
        return 1;
    }
    if(n % 2 == 0)
    {
        return 0;
    }
    root = sqrt(n);
    for(i = 3; i <= root; i = i + 2)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    long long int n, m;
    int T;
    scanf("%d",&T);
    while(T--)
    {
        //printf("Please enter a number (enter 0 to exit): ");
        scanf("%lld", &n);
        if(n == 0)
        {
            break;
        }
        if(1 == is_prime(n))
        {
            printf("%lld is a prime\n", n);
        }
        else
        {
            printf("%lld is not a prime\n", n);
        }
    }
    return 0;
}
