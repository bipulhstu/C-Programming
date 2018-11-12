#include<stdio.h>
int main()
{
    int arr[5]={8,3, 1, 6, 2};
    int i, j, k, temp, n;
    i=0; n=5;
    for(i=0; i<n-1; i++)
    {
    for(j=i+1; j<n; j++)
    {
        if(arr[j]<arr[i])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
       /*  for(k=0; k<n; k++)
        printf("%d ", arr[k]);
        printf("\n");*/
    }
    }
     for(k=0; k<n; k++)
        printf("%d ", arr[k]);

    return 0;
}
