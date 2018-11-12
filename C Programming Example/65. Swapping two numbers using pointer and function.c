#include<stdio.h>
void swapping(int *ptr1, int *ptr2)
{
    int temp;
    ///Swapping
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int x = 10, y = 20;

    printf("Before Swapping: \n");
    printf("x = %d and y = %d\n\n",x,y);

    swapping(&x, &y);

    printf("After Swapping: \n");
    printf("x = %d and y = %d\n\n",x,y);

    return 0;
}

