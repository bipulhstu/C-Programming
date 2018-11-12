#include<stdio.h>
int main()
{
    int i, t, n, a, b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
            printf("Invalid!\n");
        else
        {
            for(i=a; i<=b; i=i+a)
            {

                    printf("%d\n",i);
            }
        }


    }
    return 0;
}
