#include<stdio.h>
int main()
{
	//code
	int i, j, t, n, sum;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    for(i=1; i<=n; i=i+2)
        {
            for(j=1; j<=n; j++)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
	}
	return 0;
}
