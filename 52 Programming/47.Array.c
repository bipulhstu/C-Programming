#include<stdio.h>
int main()
{
    int T, a[1000], b[1000], c[1000],n, n2, i, j, k, l;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&n2);
        int k=0, l=0, m=0, nn=n+n2;
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(j=0; j<n2; j++)
            scanf("%d",&b[i]);
        int p;
        for(p=0; p<=nn; p++)
        {
           if(a[k]<b[l])
           {
               c[m]=a[k];
               m++;
               k++;
           }
           else
           {
               c[m]=b[l];
               k++;
               j++;
           }
        }
        for(p=0; p<=nn; p++)
            printf("%d ",c[p]);
        printf("\n");2

    }
}
