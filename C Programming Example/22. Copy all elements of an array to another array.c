#include<stdio.h>
int main()
{
    int array1[10], array2[10], n, i;
    printf("How many numbers : ");
    scanf("%d",&n);


    printf("Enter %d numbers : ");
    for(i=0; i<n; i++)
        scanf("%d",&array1[i]);

    ///printing array1
    printf("Array1 : ");
    for(i=0; i<n; i++)
        printf("%d ",array1[i]);
    printf("\n");

    ///Copy all elements of array1 to array2
    for(i = 0; i<n; i++)
        array2[i] = array1[i];

     ///printing array2
    printf("Array2 : ");
    for(i=0; i<n; i++)
        printf("%d ",array2[i]);
    printf("\n");


}
