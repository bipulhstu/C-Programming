#include<stdio.h>
int main()
{
    int i, t, n, num, rev;
    scanf("%d",&t);
    while(t--)
    {
        rev=0;
        scanf("%d",&num);
        while(num!=0)
        {

            rev=rev*10;
             rev=rev+num%10;
            num=num/10;
        }
        printf("%d\n",rev);

    }
}
