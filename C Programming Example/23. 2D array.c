#include<stdio.h>
int main()
{
    int A[3][4], B[3][4], i, j;
    printf("Enter elements for A matrix: \n");
    ///scanning elements for A matrix
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    ///printing A matrix
    for(i = 0; i < 3; i++)
    {
        printf("A = \t");
        for(j = 0; j < 4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
