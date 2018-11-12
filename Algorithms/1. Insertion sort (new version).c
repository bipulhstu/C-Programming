#include<stdio.h>
int main()
{
    int arr[100], i, j, value, hole,n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(i=1; i<n; i++)
    {
        value=arr[i];
        hole=i;
        while(hole>0 && arr[hole-1]>value)
        {
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=value;
    }
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
