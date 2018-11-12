///
#include<stdio.h>
int main()
{
    int i, n,num[100], count=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf(" ^[\n]", num);
        count++;
        printf("%d\n", count);
    }

    return 0;
}

