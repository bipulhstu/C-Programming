///Infinite Recursion
#include<stdio.h>
void recurse()
{
    char *s="Hurray! I am learning recurison.";
    printf("%s\n",s);
    recurse();
}
int main()
{
    recurse();

    return 0;
}
