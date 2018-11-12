#include<stdio.h>
int main()
{
    int r1, c1, r2, c2, i, j, k, sum = 0;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter the size of row and column of A matrix : ");
    scanf("%d%d",&r1, &c1);
    printf("Enter the size of row and column of B matrix : ");
    scanf("%d%d",&r2, &c2);

    while(c1 != r2)
    {
        printf("Error!!! column of A matrix is not equal to the row of B matrix.\n");
        printf("Enter the size of row and column of A matrix : ");
        scanf("%d%d",&r1, &c1);
        printf("Enter the size of row and column of B matrix : ");
        scanf("%d%d",&r2, &c2);
    }

    printf("Enter elements for A matrix: \n");
    ///scanning elements for A matrix
    for(i = 0; i <r1 ; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    ///printing A matrix
     printf("A = \t");
    for(i = 0; i < r1; i++)
    {

        for(j = 0; j < c1; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
        printf("\t");

    }
    ///Elements for B matrix
    printf("\nEnter elements for B matrix: \n");
    ///scanning elements for B matrix
    for(i = 0; i < r2 ; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    ///printing B matrix
    printf("B = \t");
    for(i = 0; i < r2; i++)
    {

        for(j = 0; j < c2; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
        printf("\t");

    }
    ///Multiplication of A and B
    for(i = 0; i<c1; i++)
    {
        for(j = 0; j<r2; j++)
        {
            for(k = 0; k<c1; k++)
            {
                sum = sum + A[i][k]*B[k][j];
            }
            C[i][j] = sum;
            sum = 0;
        }
    }
    ///printing A*B matrix
    printf("\nA*B = \t");
    for(i = 0; i < r1; i++)
    {

        for(j = 0; j < c2; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");

    }


    return 0;
}


