
#include<stdio.h>
#include<math.h>
int main()
{
    int i, t, n;
    long int  num;
    scanf("%d",&t);
    while(t--)
    {
        long int sum,N;
        scanf("%ld",&N);
        for(num=2; num<=N; num++)
        {
          sum=1;
          int sqrt_num;
          sqrt_num=sqrt(num);
          for(i=2; i<=sqrt_num; i++)
        {
            if(num%i==0)
                sum=sum+i+num/i;
        }
          if(num==sum)
             printf("%ld\n",num);

        }


    }
    return 0;
}
