#include<stdio.h>
int main()
{
    int t, i, a, b, c, temp;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if(a>=b && b>=c)
        {
            printf("Case %d: %d %d %d\n", i, c, b, a);
        }
        else if(b>=a && a>=c)
        {
            printf("Case %d: %d %d %d\n", i, c, a,b);
        }
        else if (c>=a && a>=b)
        {
            printf("Case %d: %d %d %d\n", i, b, a, c);
        }
        else if (a>=c && c>=b)
        {
            printf("Case %d: %d %d %d\n", i, b,c,a);
        }
         else if (b>=c && c>=a)
        {
            printf("Case %d: %d %d %d\n", i, a, c,b);
        }
         else if (c>=b && b>=a)
        {
            printf("Case %d: %d %d %d\n", i, a, b, c);
        }
    }
    return 0;
}
