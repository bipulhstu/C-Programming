#include<stdio.h>
#include<math.h>
int main()
{
    int a[1000],i,j,n;
    printf("Please!! Enter a number to find all factor of this number:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }
    return 0;

}
