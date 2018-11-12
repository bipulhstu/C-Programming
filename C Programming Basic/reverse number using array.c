#include<stdio.h>
int main()
{
    int n, array[100], i;
    printf("Enter number of digits in your number:");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
        ///storing each number in array
    }
    printf("Reverse number is:");
    for(i=n-1; i>=0; i--)
    {
        printf("%d", array[i]);
    }
    return 0;
}
