///Access array elements using pointer
#include<stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr, i;

    ptr = &a[0]; ///pointing to address of first value
    for(i = 0; i<5; i++)
    {
        printf("%d\n", *ptr);
        ptr++; ///next index
    }

    return 0;
}
