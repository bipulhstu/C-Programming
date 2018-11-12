#include<stdio.h>
int main()
{
    int i, n, count1=0, count2=0;
    scanf("%d", &n);
    while(n!=0)
    {
        scanf("%d", &i);
        if(i>0)
            count1++;
        else if(i<0)
            count2++;
        n--;
    }
    printf("%d %d\n", count1, count2);
    return 0;
}

