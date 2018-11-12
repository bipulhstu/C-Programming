#include<stdio.h>
int main()
{
    int i, t, count;
    double num;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%lf",&num);
        while(num>1.00)
        {
            num=num/2;
            count++;
        }
        printf("%d days\n",count);

    }
     return 0;
}
