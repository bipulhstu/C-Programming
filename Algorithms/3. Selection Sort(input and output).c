#include<stdio.h>
int main()
{
    int arr[100];
    int i, j, k, temp, n, iMin;
    while(scanf("%d",&n)!=EOF){
    for(i=0; i<n; i++)
    scanf("%d",&arr[i]);
    for(i=0; i<n-1; i++)///we need to do n-2 passes
    {
    iMin=i; ///ith position: elements from i till n-1 are candidates
    for(j=i+1; j<n; j++)
    {
        if(arr[j]<arr[iMin])
        {
            iMin=j; ///update the index of minimum element
        }
    }
            temp=arr[i];
            arr[i]=arr[iMin];
            arr[iMin]=temp;
    }
     for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    }

    return 0;
}

