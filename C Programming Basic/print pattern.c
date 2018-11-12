#include<stdio.h>
int main()
{
    int i,j, n,sum,t, a;
    float avg;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        for(j=t-i; j>=1; j--)
            printf("*");
        for(n=t-i+1; n<=t; n++)
            printf("%d",n);
        printf("\n");
    }

}

