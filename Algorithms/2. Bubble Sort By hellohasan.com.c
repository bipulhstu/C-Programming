///Bubble Sort by hasanerrafkhata
#include<stdio.h>
#include<conio.h>
#include<stdint.h>
#include<stdbool.h>
int main()
{
    int arr[10],i, j, temp, number_of_elements=5;
    bool isSwapped;
    printf("Enter %d elements in an array:\n",number_of_elements);
    for(i=0; i<number_of_elements; i++)
        scanf("%d",&arr[i]);
    ///Start Bubble Sort
    for(i=0; i<number_of_elements-1; i++)
    {
        isSwapped=false;
        for(j=0; j<number_of_elements-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                isSwapped=true;
            }
        }
        ///No element swapped in this array.That means the array is sorted
        ///So no need to run another step.That's why break the loop.
        if(isSwapped==false)
            break;
    }
    ///Print the sorted array
    for(i=0; i<number_of_elements; i++)
        printf("%d ",arr[i]);
    return 0;

}
