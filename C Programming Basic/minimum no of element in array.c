///minimum no of element in array
#include<stdio.h>
int main()
{
    int array[10],minimum,c, size, location=1;
    printf("Enter the number of elements in array:");
    scanf("%d",&size);
    printf("Enter %d integers:\n",size);
    for(c=0; c<size; c++)
        scanf("%d",&array[c]);
        minimum=array[0];
        ///assuming first no as minimum
        for(c=1; c<size; c++)
        {
            if(array[c]<minimum){
                minimum=array[c];
            location=c+1;
            ///if any no greater than minimum found then set it as minimum
            ///and save it as location
        }
    }
        printf("Minimum element is present at location %d\nand its value is %d\n",location, minimum);
        return 0;

}

