///Insertion Sort
#include<stdio.h>
int main()
{
    int size=5;
    int arr[5]={5,4,3,2,1};
    int i, j, k,temp, count=0;
    for(i=0; i<size; i++)
    {
        count++;
        j=i;
        printf("After %d pass.\n",count);
        while(j>0 && arr[j]<arr[j-1])
        {
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
            for(k=0; k<size; k++){
                printf("%d ",arr[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
