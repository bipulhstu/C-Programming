#include<stdio.h>
int main()
{
    int x = 10, y = 20, temp;
    int *ptr1, *ptr2;  ///pointer declaration

    ptr1 = &x; ///pointing address of variable x
    ptr2 = &y; ///pointing address of variable x

    ///Swapping
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After Swapping: \n");
    printf("x = %d and y = %d\n",x,y);

    return 0;
}
