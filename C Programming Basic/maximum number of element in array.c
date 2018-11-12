///maximum no of element in array
#include<stdio.h>
int main()
{
    int array[10],maximum,c, size, location=1;
    printf("Enter the number of elements in array:");
    scanf("%d",&size);
    printf("Enter %d integers:\n",size);
    for(c=0; c<size; c++)
        scanf("%d",&array[c]);
        maximum=array[0];
        ///assuming first no as maximum
        for(c=1; c<size; c++)
        {
            if(array[c]>maximum){
                maximum=array[c];
            location=c+1;
            ///if any no greater than maximum found then set it as maximum
            ///and save it as location
        }
    }
        printf("Maximum element is present at location %d\nand its value is %d\n",location, maximum);
        return 0;

}
