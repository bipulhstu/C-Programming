#include <stdio.h>
int main()
{
    int A[100][10], row, col, a, b;
    scanf("%d%d",&row, &col);
    for(a=0; a<row; a++)
    {
        for(b=0; b<col; b++)
            scanf("%d",&A[a][b]);
    }

    int B[100][10];

    int i, j;
    for (i = 0; i < row; i++)
        {
        for (j = 0; j < col; j++)
            B[i][j] = A[j][i];
        }


    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
           printf("%d ", B[i][j]);
        printf("\n");
    }

    return 0;
}
