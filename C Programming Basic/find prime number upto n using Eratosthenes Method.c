#include<stdio.h>
#include<math.h>
int main()
{
    int primes[1000],i,j,k,n;
    printf("Enter a number to find prime upto this number:\n");
    scanf("%d",&n);
    for(i=2; i<=n; i++)
        primes[i]=1;
    primes[0]=0;
    primes[1]=0;
    for(i=2; i<=sqrt(n); i++)
    {
        if(primes[i]==1)
            for(j=2; i*j<=n; j++)
            primes[i*j]=0;

    }
    for(i=2; i<=n; i++){
      if(primes[i]==1)
      printf("%d is a prime.\n",i);
    else
        printf("%d is not a prime.\n",i);
    }


}
