#include<stdio.h>
int main()
{
    int i, j, x, n=5;
    int num[100]={5, 4, 3, 2, 1};
    for(i=0; i<n; i++)
    {
        x=num[i];
        j=i-1;
        while(j>=0 && num[j]>x)
        {
            num[j+1]=num[j];
            j--;
        }
        num[j+1]=x;
    }
        for(i=0; i<n; i++)
        {
            printf("%d ", num[i]);
        }
        printf("\n");




}
