#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,count, n;
    printf("Enter a number to find its prime factorization:\n");
    scanf("%d",&n);
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            count=0;
            while(n%i==0)
            {
                n=n/i;
                count++;
            }
            printf("%d^%d ",i,count);
        }
    }
    if(n!=1)
        printf("%d^1",n);
    return 0;
}
