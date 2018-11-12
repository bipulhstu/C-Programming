///Insertion Sort by eshikkha.com
#include<stdio.h>
int main()
{
    int arr[]={5,4,3,2,1};
    int i, j, temp;
    for(i=0; i<5; i++)
    {
        for(j=i-1; j>=0; j--)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0; i<5; i++)
       printf("%d ",arr[i]);
    return 0;
}
