///print the address of array
#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Value of array is: %d %d %d %d %d\n",arr[0], arr[1], arr[2], arr[3], arr[4]);

    printf("Address of array is: %p\n",arr);
    printf("Address of arr[0] is %p\n",&arr[0]);
    printf("Address of arr[1] is %p\n",&arr[1]);
    printf("Address of arr[2] is %p\n",&arr[2]);
    printf("Address of arr[3] is %p\n",&arr[3]);
    printf("Address of arr[4] is %p\n",&arr[4]);

    return 0;

}
