///Like structure, union is a user defined data type. In union,
///all members share the same memory location
#include<stdio.h>
union test{   ///union declaration
    int x, y;
};
int main()
{
    union test t1;  ///variable declaration
    t1.x = 10;     ///variable initialization
    ///printing values
    printf("t1.x = %d\n",t1.x);
    printf("t1.y = %d\n\n",t1.y);


    t1.x = 20;     ///variable initialization
    ///printing values
    printf("t1.x = %d\n",t1.x);
    printf("t1.y = %d\n",t1.y);

    getch();
}
