#include<stdio.h>
int main()
{
    int t, i, array[20];
    scanf("%d",&t);
    while(t--)
    {
        int n, count=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&array[i]);
        for(i=1; i<n; i++)
        {
            if(array[i]<array[i-1]){
                count++;
                //break;
            }
        }
        if(count==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
