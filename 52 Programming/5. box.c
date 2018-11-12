///box-1
#include<stdio.h>
int main()
{
    int i, j, t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
          for(j=n; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
        }

    }
    return 0;
}
