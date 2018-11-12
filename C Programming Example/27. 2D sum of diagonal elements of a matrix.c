#include<stdio.h>
int main()
{
    int A[10][10], i, j, sum = 0;
    ///scanning elements for A matrix
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    ///printing A matrix
    printf("A = \t");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    ///sum of diagonal elements of the matrix
    for(i = 0; i< 3 ; i++)
    {
        for(j = 0; j< 3; j++)
        {
            if(i == j)
                sum = sum + A[i][j];
        }
    }
    printf("\nSum of diagonal matrix is %d\n", sum);
    return 0;
}
