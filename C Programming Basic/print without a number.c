#include<stdio.h>
int main()
{
    int i, t, n, num[100],c;
    scanf("%d",&t);
    while(t--)
    {
        int count=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&num[i]);
        scanf("%d",&c);
        for(i=0; i<n; i++)
        {
            if(num[i]==c)
                continue;
            else
                count++;
        }
        printf("%d\n",count);
        for(i=0; i<n; i++)
        {
            if(num[i]==c)
                continue;
            else{
                printf("%d",num[i]);
               // if(i<(n-1))
                 //   printf(" ");
               // else
                   // printf("\n");
            }

        }
    }
    return 0;
}
