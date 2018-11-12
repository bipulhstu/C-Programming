#include<stdio.h>
#include<math.h>
int main()
{
    int i, t, n;
    long long int  num;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long int sum=0;
        scanf("%lld",&num);
        for(i=1; i<=(num/2); i++)
        {
            if(num%i==0){
                sum=sum+i;
                if(sum>=num)
                    break;
            }

        }
        if(num==sum)
             printf("YES, %lld is a perfect number!\n",num);
        else
            printf("NO, %lld is not a perfect number!\n",num);
    }
    return 0;
}
