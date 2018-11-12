///finite Recursion
#include<stdio.h>
void recurse(int count)
{
    if(count == 5)
        return;  ///or break;
    char *s="Hurray! I am learning recurison.";
    printf("%s\n",s);
    recurse(count+1);
}
int main()
{
    recurse(1);

    return 0;
}

