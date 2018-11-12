///Insertion Sort by tutorialspoint
#include<stdio.h>
#include<stdbool.h>
#define MAX 7
int arr[MAX]={4,6,3,2,1,9,7};
void printline(int count)
{
    int i;
    for(i=0; i<=count-1; i++)
        printf("=");
    printf("\n");
}
void display()
{
    int i;
    printf("[");

    ///navigate through all items
    for(i=0; i<MAX; i++)
        printf("%d ",arr[i]);
    printf("]\n");
}
void selectionSort()
{
    int indexMin, i, j, temp;

    ///loop through all numbers
    for(i=0; i<MAX-1; i++)
    {
        ///set current element as minimum
        indexMin=i;
        ///check the element to be minimum
        for(j=i+1; j<MAX; j++)
        {
            if(arr[j]<arr[indexMin])
                indexMin=j;
        }
        if(indexMin!=i)
        {
            printf("Items Swapped: [%d %d]\n",arr[i],arr[indexMin]);

            ///Swap the numbers

            temp=arr[indexMin];
            arr[indexMin]=arr[i];
            arr[i]=temp;
        }
        printf("Iteration %d#: ",i+1);
        display();
    }
}
main()
{
    printf("Input array:\n");
    display();
    printline(50);
    selectionSort();
    printf("Output array:\n");
    display();
    printline(50);
}


