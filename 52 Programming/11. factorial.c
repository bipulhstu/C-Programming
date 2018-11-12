#include<stdio.h>
int main()
{
    long long int i, factorial;
    int j, N, T;
    scanf("%d", &T);
    for(j=0; j<T; j++)
    {
    scanf("%d", &N);
    factorial=1;
    for(i=1; i<=N; i++){
        factorial=factorial*i;
    }
    printf("%lld\n", factorial);
    }
    return 0;
}
