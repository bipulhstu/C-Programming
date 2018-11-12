#include<stdio.h>
int main()
{
    int i, j, n, k, a, b;
    scanf("%d",&n);
    a=n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<a; j++)
        printf(" ");
        a--;
        for(k=1; k<=2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
