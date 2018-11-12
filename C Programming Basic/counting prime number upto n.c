#include <stdio.h>
#include<math.h>
 int main()
 {
     int i, j, t, n, a, count=0, isPrime;
     int b, c, d, ara[100];
    // scanf("%d%d",&a,&b);
     scanf("%d",&n);
     for(i=2; i<=n; i++)
    {
        /* Assume that the current number is Prime */
        isPrime = 1;

        /* Check if the current number i is prime or not */
        for(j=2; j<=i/2; j++)
        {
            /*
             * If i is divisible by any number other than 1 and self
             * then it is not prime number
             */
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        /* If the number is prime then print */
        if(isPrime==1)
           count++;
    }
     printf("%d\n",count);
     return 0;
 }
