///structure size = total number of bytes among variables
///union size = maximum number of bytes among bytes
#include<stdio.h>
union test1{   ///here, size of test1 is 4, 4 = 4 bytes
   int x, y;
};
union test2{  ///here, size of test2 is 4, 4 = 4 bytes
    char name;
    int x;
};
union test3{ ///here, size of test3 is 24, 8 = 20 bytes
   char name[20];
   double d;
};
struct test4{///here, size of test4 is 4+4+8=16 bytes
   int x;
   float y;
   double d;
};
int main()
{
    union test1 t1;         ///variable declaration
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    ///printing size of union and structure
    printf("sizeof(t1) = %d\n",sizeof(t1));
    printf("sizeof(t2) = %d\n",sizeof(t2));
    printf("sizeof(t3) = %d\n",sizeof(t3));
    printf("sizeof(t4) = %d\n",sizeof(t4));

    return 0;
}
