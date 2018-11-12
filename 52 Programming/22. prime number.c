#include<stdio.h>
#include<math.h>
#define size 100002
char ara[size];
void sieve()
{
    int i, j, root;
    for(i=2; i<size; i++)
    {
        ara[i]=1;
    }
    root=sqrt(size);
    for(i=2; i<=root; i++)
    {
        if(ara[i]==1)
        {
            for(j=2; i*j<=size; j++){
                ara[i*j]=0;
            }
        }
    }

}
int main()
{
    int i, t, a, b, count;
    sieve();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a, &b);
        count=0;
        for(i=a; i<=b; i++)
        {
            if(ara[i]==1)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
