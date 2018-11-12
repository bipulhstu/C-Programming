#include<stdio.h>
int main()
{
    int x=40;
    {
        x=20;
        printf("%d ",x);
    }
    printf("%d\n",x);
    return 0;
}
