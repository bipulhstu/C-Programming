///typedef (type definition) is used changed the name of
///custom and built in data type
#include<stdio.h>
int main()
{
    char ch;   ///variable declaration
    ch = 'A'; ///variable initialization
    printf("ch = %c\n",ch); ///printing value

    typedef char letter;  ///char changed to letter
    letter ch2; ///variable declaration
    ch2 = 'B'; ///variable initialization
    printf("ch2 = %c\n",ch2); ///printing value

    return 0;
}
