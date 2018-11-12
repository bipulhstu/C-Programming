///Insertion Sort by tutorialspoint
#include<stdio.h>
#include<stdbool.h>
#define MAX 7
int array[MAX]={4,6,3,2,1,9,7};
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
        printf("%d ",array[i]);
    printf("]\n");
}
void insertionSort()
{
    int valueToInsert;
    int holePosition;
    int i;

    ///loop through all numbers
    for(i=1; i<MAX; i++)
    {
        ///select a value to be inserted
        valueToInsert=array[i];
        ///select a hole position where number is to be sorted
        holePosition=i;
        ///check previous number is larger than value to be inserted
        while(holePosition>0 && array[holePosition-1]>valueToInsert)
        {
            array[holePosition]=array[holePosition-1];
            holePosition--;
            printf("Item moved: %d\n",array[holePosition]);
        }
        if(holePosition!=i)
        {
            printf("Item inserted: %d, at position: %d\n",valueToInsert,holePosition);
            ///insert the number at the hole position
            array[holePosition]=valueToInsert;
        }
        printf("Iteration %d#",i);
        display();
    }
}
main()
{
    printf("Input array:\n");
    display();
    printline(50);
    insertionSort();
    printf("Output array:\n");
    display();
    printline(50);
}

