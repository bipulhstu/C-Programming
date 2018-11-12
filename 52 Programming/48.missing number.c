#include<stdio.h>
int main()
{
    int T, i, n, k, arr[100001];
    scanf("%d",&T);
    while(T--)
    {
    int N;
    scanf("%d",&N);
    for(i=0; i<N-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1; i<=N; i++)
    {
        int found=0, j;
        for(j=0; j<N-1; j++)
        {
            if(i==arr[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
            printf("%d\n",i);
    }
    }
    return 0;
}
