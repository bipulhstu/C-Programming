#include<stdio.h>
int main()
{
    int rows, a, b, number=1;
    printf("Enter the number of rows of Floyd's triangle to print : ");
    scanf("%d",&rows);
    for(a=1; a<=rows; a++)
    {
        for(b=1; b<=a; b++)
        {
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
    return 0;
}
