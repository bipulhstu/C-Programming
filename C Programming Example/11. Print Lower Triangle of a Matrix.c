#include<stdio.h>

// Driver function
int main()
{
    int matrix[100][100];
    int row, col,i, j;
    scanf("%d%d",&row,&col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            scanf("%d",&matrix[i][j]);
    }


    int k, l;
    for (k=0; k<row; k++)
    {
        for (l=0; l<col; l++)
        {
            if (k<l)
            {
                matrix[k][l] = 0;
            }
            printf("%d ", matrix[k][l]);
        }
        printf("\n");
    }

    return 0;

}
