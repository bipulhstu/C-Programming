#include<stdio.h>
#include<string.h>
int main()
{
    int i, t, n;
    int a[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int j=1;

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        //printf("Set %d:  ",j);
        for(i=0; i<n; i=i+2){
            printf("%d",a[i]);
            if(n%2==0 && i==n-2)
                printf("\n");
            else if(n%2!=0 && i==n-1)
                printf("\n");
            else
                printf("  ");

        }
        //printf("\n");
        //j++;

    }
    return 0;
}

