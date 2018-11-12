#include<stdio.h>
int main()
{
    int numberOfRows, numberOfCols, i, j;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter the size of row and column : ");
    scanf("%d%d",&numberOfRows,&numberOfCols);

    printf("Enter elements for A matrix: \n");
    ///scanning elements for A matrix
    for(i = 0; i <numberOfRows ; i++)
    {
        for(j = 0; j < numberOfCols; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    ///printing A matrix
    for(i = 0; i < numberOfRows; i++)
    {
        printf("A = \t");
        for(j = 0; j < numberOfCols; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    ///Elements for B matrix
    printf("Enter elements for B matrix: \n");
    ///scanning elements for B matrix
    for(i = 0; i <numberOfRows ; i++)
    {
        for(j = 0; j < numberOfCols; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    ///printing B matrix
    for(i = 0; i < numberOfRows; i++)
    {
        printf("B = \t");
        for(j = 0; j < numberOfCols; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    ///Addition of A and B matrix
    for(i = 0; i <numberOfRows ; i++)
    {
        for(j = 0; j < numberOfCols; j++)
        {
            C[i][j] = A[i][j]+B[i][j];
        }
        printf("\n");
    }
    ///printing A+B matrix
    printf("A+B= \t");
    for(i = 0; i < numberOfRows; i++)
    {

        for(j = 0; j < numberOfCols; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    return 0;
}

