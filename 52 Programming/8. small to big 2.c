#include<stdio.h>
int main()
{
    int T, i, a, b, c;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d",&a, &b,&c);
        if(a<b && b<c && c>a)
            printf("Case %d: %d %d %d\n", i, a, b, c);
        else if(a<b && b<c && c>a)
            printf("Case %d: %d %d %d\n", i, a, b, c);

    }
}
