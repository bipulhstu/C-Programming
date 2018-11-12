#include<stdio.h>
int main()
{
    int i, j, N, T, t;
    scanf("%d", &N);
       for(t=1; t<=N; t++)
    {
        scanf("%d",&T);
        for(i=1; i<=T; i++)
        {
            for(j=1; j<=T; j++)
        {
            printf("*");
        }
            printf("\n");
        }

   }
     return 0;
}

