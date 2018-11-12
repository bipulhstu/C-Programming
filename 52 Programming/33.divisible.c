#include<stdio.h>
int main()
{
    int i, t, n, a, b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
            printf("Invalid!\n");
        else
        {
            for(i=a; i<=b; i++)
            {
                if(i%c==0)

                    printf("%d\n",i);
            }
        }


    }
    return 0;
}

