///Bubble Sort by tutorialspoint
#include<stdio.h>
#include<stdbool.h>
#define MAX 10
int list[MAX]={1,2,3,4,5,6,7,8,9,10};
///int list[MAX]={1,8,4,6,0,3,5,2,7,9};
void display()
{
    int i;
    printf("[");
    ///navigate through all lines
    for(i=0; i<MAX; i++){
        printf("%d ",list[i]);
    }
    printf("]\n");
}

void bubbleSort()
{
    int i, j, temp;
    bool swapped=false;
    ///loop through all numbers
    for(i=0; i<MAX-1; i++){
            swapped=false;

    ///loop through numbers falling ahead
    for(j=0; j<MAX-1-i; j++)
    {
    printf(" Items compared: [%d %d]",list[j],list[j+1]);
    ///check it next number is lesser than current no
    ///swap the number
    ///Bubble up the highest number

            if(list[j]>list[j+1])
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;

                swapped=true;
                printf("=>swapped [%d %d]\n",list[j],list[j+1]);
            }
            else
                printf("=>Not swapped!!\n");
        }
        ///if no number is swapped that means array is sorted now
        ///break the loop.
        //if(!swapped){
        //   break;
        //}
        printf("Iteration %d#: ",(i+1));
        display();
    }
}
main(){
    printf("Input array: ");
    display();
    printf("\n");
    bubbleSort();
    printf("\nOutput array: ");
    display();
    return 0;

}



