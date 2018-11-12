#include<stdio.h>
int main()
{
    int i, n[100], limit;
    n[0]=0;
    n[1]=1;
    printf("Enter limit of fibonacci number:");
    scanf("%d", &limit);
    printf("%d ", n[1]);
    for(i=2; i<=limit; i++)
    {
        n[i]=n[i-2]+n[i-1];
        printf("%d ",n[i]);
    }


}
