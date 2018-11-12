#include<stdio.h>
int main()
{
    int a[100], b[100], c, d, n;
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(c=0; c<n; c++)
        scanf("%d",&a[c]); ///Input array
    for(c=n-1, d=0; c>=0; c--,d++)
        b[d]=a[c];        ///Copying reverse into array b
    for(c=0; c<n; c++)
        a[c]=b[c];        ///Reverse array into array a
    for(c=0; c<n; c++)
        printf("%d\n",a[c]);
    return 0;
}
