#include<stdio.h>
int main()
{
    int row, col, n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int count= 0;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++){
            printf("%d ",++count);
        }
        printf("\n");
    }
    return 0;
}
