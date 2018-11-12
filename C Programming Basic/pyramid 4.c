///Printing n number of lines of a pyramid
///Printing a pyramid
#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
           printf("*");
        }
        printf("\n");
    }
}

