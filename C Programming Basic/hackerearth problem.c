#include <stdio.h>

int main()
{
    int i=2,j, n,count=0;
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        count=1;
         for(j=2; j<=i/2; j++)
    {
        if(i%j==0){
            count=0;
            break;
        }

    }
    if(count==1)
         printf("%d ",i);
    }


    return 0;
}
