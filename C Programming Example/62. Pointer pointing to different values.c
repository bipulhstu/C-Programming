///Pointer pointing to different values
#include<stdio.h>
int main()
{
    int x = 10, y = 20, z = 30;
    int *ptr;  ///pointer declaration
    ptr = &x; ///pointing address of variable x
    ///printing value of x using pointer
    printf("Value of x = %d\n\n", *ptr);

    ptr = &y; ///pointing address of variable y
    ///printing value of y using pointer
    printf("Value of y = %d\n\n", *ptr);

    ptr = &z; ///pointing address of variable z
    ///printing value of z using pointer
    printf("Value of z = %d\n", *ptr);

    return 0;
}
