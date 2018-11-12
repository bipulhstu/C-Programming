///Arithmetic operation using pointer
#include<stdio.h>
int main()
{
    int x = 10, y = 20, sum;
    int *ptr1, *ptr2;  ///pointer declaration

    ptr1 = &x; ///pointing address of variable x
    ptr2 = &y; ///pointing address of variable x

    sum = *ptr1 + *ptr2;

    ///printing value of x using pointer
    printf("Sum of %d + %d = %d\n\n",x, y, sum);

    return 0;
}
