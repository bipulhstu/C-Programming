///incrementing a pointer
#include<stdio.h>
const int max=3;
int main()
{
    int var[]={10, 20, 100};
    int i, *ptr;

    ///let us have array address in pointer
    ptr=&var;
    for(i=0; i<max; i++)
    {
        printf("Address of var[%d] is: %x\n", i, ptr);
        printf("Value of var[%d] is: %d\n", i, *ptr);

        ///move to the next location
        ptr++;
    }
    return 0;

}
