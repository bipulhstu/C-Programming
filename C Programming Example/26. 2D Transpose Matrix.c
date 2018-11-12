///First Matrix Row = Transposed Matrix Column
///First Matrix Column = Transposed Matrix Row
#include<stdio.h>
int main()
{
    int A[10][10], Transpose[10][10], i, j, row, col;
    printf("Enter row and column for A matrix : ");
    scanf("%d%d",&row, &col);
    printf("Enter elements for A matrix: \n");
    ///scanning elements for A matrix
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    ///printing A matrix
    printf("A = \t");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    ///Transposing A matrix
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            Transpose[j][i]= A[i][j];
        }
        printf("\n");
    }
    ///printing transposing matrix
    printf("\nTranspose = \t");
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ",Transpose[i][j]);
        }
        printf("\n");
        printf("\t\t");
    }
    return 0;
}

