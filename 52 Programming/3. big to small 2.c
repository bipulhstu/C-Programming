///অধোগামী সংখ্যা
#include<stdio.h>
int main()
{
    int i, t=0;
    for(i=1000; i>t; i--)
    {
        printf("%d\t", i);
        if((i-1)%5==0)
            printf("\n");
    }
    return 0;
}
