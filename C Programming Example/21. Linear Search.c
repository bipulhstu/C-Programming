///Linear search
#include<stdio.h>
#include<math.h>
int main()
{
    int num[] = {10, 23, 4, 5, 52, 5, 5, 3, 6};
    int value , pos = -1, i;
    printf("Enter a value to search : ");
    scanf("%d",&value);

    for(i = 0; i<9; i++)
    {
        if(value == num[i])
        {
            pos = i + 1;
            break;
        }
    }
    if(pos == -1)
        printf("%d is not found in the list.\n",value);
    else
        printf("%d is found at %d position.\n",value,pos);

    return 0;
}
