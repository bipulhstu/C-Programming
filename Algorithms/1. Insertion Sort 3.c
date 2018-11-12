#include<stdio.h>
int main()
{
    int i ,j, x,t, num[100];
    printf("Enter number of elements of array:");
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &num[i]);
    }

    for(i=0; i<t; i++)
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
    for(i=0; i<t; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;

}
