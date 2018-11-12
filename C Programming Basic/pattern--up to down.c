
#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=10; i>0; i--)
    {
        for(j=i; j>=1; j--)
            printf("%d  ",j);

        printf("\n");
    }
}
